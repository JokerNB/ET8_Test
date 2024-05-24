using System;
using ET.EventType;

namespace ET.Server
{
    [EntitySystemOf(typeof(BuffCreateInfo))]
    [FriendOfAttribute(typeof(ET.Server.BuffCreateInfo))]
    public static partial class BuffCreateInfoSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.BuffCreateInfo self, int args2)
        {
            self.ConfigId = args2;
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.BuffCreateInfo self)
        {
            self.ConfigId = default;
        }
    }

    [Invoke(TimerInvokeType.BuffExpireTime)]
    public class BuffExpireTimer_TimerHandler : ATimer<Buff>
    {
        protected override void Run(Buff t)
        {
            t.TimeOut();
        }
    }

    [Invoke(TimerInvokeType.BuffTickTime)]
    public class BuffTickTimer_TimerHandler : ATimer<Buff>
    {
        protected override void Run(Buff t)
        {
            t.TickActions();
        }
    }

    [EntitySystemOf(typeof(Buff))]
    [FriendOfAttribute(typeof(ET.Server.Buff))]
    public static partial class BuffSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.Buff self, int args2)
        {
            self.configId = args2;
            self.AddComponent<ActionsTempComponent>();
            self.CreateTime = TimeInfo.Instance.ServerNow();

            if(self.Config.TotalTime == 0)
                self.SetExpireTime(0);
            else
            {
                long expireTime = self.CreateTime + self.Config.TotalTime;
                self.SetExpireTime(expireTime);
            }

            self.SetTickTime(self.Config.TickTime);
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.Buff self)
        {
            self.configId = default;
            self.Owner = default;
            self.CreateTime = default;
            self.TickTime = default;
            self.TickBeginTime = default;

            var timerComponent = self.Fiber().Root.GetComponent<TimerComponent>();
            timerComponent.Remove(ref self.TickTimer);
            timerComponent.Remove(ref self.WaitTickTimer);
            self.ExpireTime = default;
            timerComponent.Remove(ref self.ExpireTimer);
        }

        [EntitySystem]
        private static void Deserialize(this ET.Server.Buff self)
        {
            self.AddComponent<ActionsTempComponent>();
            self.Owner = self.Parent.GetParent<Unit>();
        }

        public static void SetTickTime(this Buff buff, int tickTime)
        {
            if (tickTime > 0)
            {
                buff.TickBeginTime = TimeInfo.Instance.ServerNow();
                buff.TickTime = tickTime;
                var timerComponent = buff.Fiber().Root.GetComponent<TimerComponent>();
                timerComponent.Remove(ref buff.TickTimer);

                buff.TickTimer = timerComponent.NewRepeatedTimer(tickTime, TimerInvokeType.BuffTickTime, buff);
            }

        }

        public static void SetExpireTime(this Buff buff, long expireTime, bool noticeClient = false)
        {
            if (expireTime == 0)
            {
                buff.ExpireTime = 0;
                if (noticeClient)
                {
                    buff.NoticeClientUpdateInfo();
                }

                return;
            }

            if (buff.ExpireTime == expireTime)
                return;
            buff.ExpireTime = expireTime;
            if (noticeClient)
                buff.NoticeClientUpdateInfo();
            if (buff.ExpireTimer != 0)
            {
                buff.Fiber().Root.GetComponent<TimerComponent>().Remove(ref buff.ExpireTimer);
            }

            buff.ExpireTimer = buff.Fiber().Root.GetComponent<TimerComponent>().NewOnceTimer(buff.ExpireTime, TimerInvokeType.BuffExpireTime, buff);
        }

        public static void NoticeClientUpdateInfo(this Buff buff)
        {
            Unit owner = buff.Owner;
            M2C_BuffUpdate m2CBuffUpdate = M2C_BuffUpdate.Create();
            m2CBuffUpdate.UnitId = owner.Id;
            m2CBuffUpdate.BuffData = ToBuffAddProto(buff);
            MMOMessageHelper.SendClient(owner, m2CBuffUpdate, buff.Config.NoticeClientType);
        }

        public static void AddActions(this Buff buff)
        {
            long instanceId = buff.InstanceId;
            Unit owner = buff.Owner;
            foreach (int i in buff.Config.AddAction)
            {
                try
                {
                    buff.CreateActions(i, ActionsRunType.BuffAdd);
                    //可能在效果的过程中，本buff被移除回池了，然后又从池里取出来了，所以如果只判断IsDisposed是不够的
                    if (buff.InstanceId != instanceId)
                        break;
                }
                catch (Exception e)
                {
                    Log.Error($"AddActions Error , OwnerId:{owner?.Id ?? 0} buffId:{buff.Id} buffConfig:{buff.configId} Actions:{i} {e}");
                }
            }
        }

        public static void RemoveActions(this Buff buff)
        {
            long instanceId = buff.InstanceId;
            Unit owner = buff.Owner;

            foreach (int i in buff.Config.RemoveAction)
            {
                try
                {
                    buff.CreateActions(i, ActionsRunType.BuffRemove);
                    if (buff.InstanceId != instanceId)
                        break;
                }
                catch (Exception e)
                {
                    Log.Error($"RemoveActions Error , OwnerId:{owner?.Id ?? 0} buffId:{buff.Id} buffConfig:{buff.configId} Actions:{i} {e}");
                }
            }
        }

        public static BuffProto ToBuffAddProto(this Buff buff)
        {
            BuffProto buffProto = BuffProto.Create();
            buffProto.Id = buff.Id;
            buffProto.ConfigId = buff.configId;
            buffProto.CreateTime = buff.CreateTime;
            buffProto.ExpireTime = buff.ExpireTime;
            //如果有额外的数据，可以走这里，例如buff上的组件
            //buffProto.ExtraData
            return buffProto;
        }

        public static void TickActions(this Buff buff)
        {
            if (buff.IsDisposed)
                return;
            long instanceId = buff.InstanceId;
            Unit owner = buff.Owner;
            foreach (int i in buff.Config.TickAction)
            {
                try
                {
                    buff.CreateActions(i, ActionsRunType.BuffTick);
                    if (buff.InstanceId != instanceId)
                        break;
                }
                catch (Exception e)
                {
                    if (instanceId == buff.InstanceId)
                        Log.Error($"TickActions Error , OwnerId:{owner?.Id ?? 0} buffId:{buff.Id} buffConfig:{buff.configId} Actions:{i} {e}");
                    else
                        Log.Error($"TickActions Error , OwnerId:{owner?.Id ?? 0} buffId:{buff.Id} Actions:{i} {e}");
                }
            }

            if (buff.InstanceId != instanceId)
                return;
            if (buff.Config.TickAction.Length > 0)
            {
                if (owner == null)
                    return;
                M2C_BuffTick m2CBuffTick = M2C_BuffTick.Create();
                m2CBuffTick.BuffId = buff.Id;
                m2CBuffTick.UnitId = owner.Id;
                MMOMessageHelper.SendClient(owner, m2CBuffTick, buff.Config.NoticeClientType);
            }
        }

        public static void TimeOut(this Buff buff)
        {
            Unit owner = buff.Owner;
            EventSystem.Instance.Publish(buff.Root(),new BuffTimeOut(){Unit = owner,BuffId = buff.Id});
        }
    }
}