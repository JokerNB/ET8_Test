using System.Collections.Generic;
using Unity.Mathematics;

namespace ET.Server
{
    [EntitySystemOf(typeof(Cast))]
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public static partial class CastSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.Cast self, int configId)
        {
            self.ConfigId = configId;
            self.AddComponent<ActionsTempComponent>();
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.Cast self)
        {
            self.ConfigId = default;
            self.Caster = default;
            self.Target.Clear();
            self.StartTime = default;
        }

        /// <summary>
        /// 释放Cast
        /// </summary>
        /// <param name="cast"></param>
        /// <returns></returns>
        public static int Cast(this Cast cast)
        {
            Log.Error("释放技能");
            var err = cast.CastCheck();
            if (err != ErrorCode.ERR_Success)
            {
                return err;
            }

            //选择目标
            cast.SelectTarget();
            err = cast.CastCheckBeforeBegin();
            if (err != ErrorCode.ERR_Success)
            {
                return err;
            }

            cast.CastBeginAsync().Coroutine();
            return ErrorCode.ERR_Success;
        }

        /// <summary>
        /// Cast释放的前置判断
        /// </summary>
        /// <param name="cast"></param>
        /// <returns></returns>
        public static int CastCheck(this Cast cast)
        {
            if (cast == null || cast.IsDisposed)
                return ErrorCode.ERR_Cast_ArgsError;
            Unit caster = cast.Caster;
            if (caster == null || caster.IsDisposed)
                return ErrorCode.ERR_Cast_CasterIsNull;
            return ErrorCode.ERR_Success;
        }

        /// <summary>
        /// 选择目标
        /// </summary>
        /// <param name="cast"></param>
        public static void SelectTarget(this Cast cast)
        {
            Unit caster = cast.Caster;
            CastConfig castConfig = cast.Config;
            cast.Target.Clear();
            int range = 0;
            //case多的时候可以做成分发
            switch (castConfig.SelectType)
            {
                case 1: //选择身边一定范围内的一个人
                    range = int.Parse(castConfig.SelectParam[0]);

                    foreach (AOIEntity aoiEntity in caster.GetBeSeeUnits().Values)
                    {
                        Unit unit = aoiEntity.GetParent<Unit>();
                        if (unit.Type() != UnitType.Player || unit.Type() != UnitType.Monster)
                            continue;
                        //排除自己
                        if (unit == caster)
                            continue;
                        if (math.length(unit.Position - caster.Position) < range)
                        {
                            //选找到的第一个
                            cast.Target.Add(unit.Id);
                            break;
                        }
                    }

                    break;
                case 2: //选择身边一定范围内的所有人
                    range = int.Parse(castConfig.SelectParam[0]);

                    foreach (AOIEntity aoiEntity in caster.GetBeSeeUnits().Values)
                    {
                        Unit unit = aoiEntity.GetParent<Unit>();
                        if (unit.Type() != UnitType.Player || unit.Type() != UnitType.Monster)
                            continue;

                        if (math.length(unit.Position - caster.Position) < range)
                        {
                            cast.Target.Add(unit.Id);
                        }
                    }
                    break;
            }
        }

        public static int CastCheckBeforeBegin(this Cast cast)
        {
            switch (cast.Config.SelectType)
            {
                case 1:
                case 2:
                    if (cast.Target.Count <= 0)
                        return ErrorCode.ERR_Cast_TargetIsNull;
                    break;
            }

            return ErrorCode.ERR_Success;
        }

        public static async ETTask CastBeginAsync(this Cast cast)
        {
            cast.StartTime = TimeInfo.Instance.ServerNow();
            Unit caster = cast.Caster;

            M2C_CastStart m2CCastStart = M2C_CastStart.Create();
            m2CCastStart.CastId = cast.Id;
            m2CCastStart.CasterId = caster.Id;
            m2CCastStart.CastConfigId = cast.ConfigId;
            m2CCastStart.TargetsId = new List<long>(cast.Target);

            MMOMessageHelper.SendClient(cast.Caster, m2CCastStart, cast.Config.NoticeClientType);

            CastConfig config = cast.Config;
            if (config.Times.Count <= 0)
                return;
            long castInstanceId = 0;
            long casterInstanceId = 0;
            foreach (int time in config.Times)
            {
                castInstanceId = cast.InstanceId;
                casterInstanceId = caster.InstanceId;
                await caster.Fiber().Root.GetComponent<TimerComponent>().WaitTillAsync(cast.StartTime + time);
                if (!cast.CheckAsyncInvalid(castInstanceId, casterInstanceId))
                {
                    Log.Error($"Cast AsyncInvild {castInstanceId} , {casterInstanceId}");
                    return;
                }

                //创建出一系列的技能行为
                foreach (CastActionTimes castActionTimes in config.TimesDic[time])
                {
                    if (castActionTimes.IsSelfHit)
                    {
                        cast.HandleSelfHit(castActionTimes.Index);
                    }
                    else
                    {
                        cast.HandleTargetHit(castActionTimes.Index);
                    }
                }
            }

            if (config.TotalTime > 0)
            {
                castInstanceId = cast.InstanceId;
                casterInstanceId = caster.InstanceId;

                await caster.Fiber().Root.GetComponent<TimerComponent>().WaitTillAsync(cast.StartTime + config.TotalTime);

                if (!cast.CheckAsyncInvalid(castInstanceId, casterInstanceId))
                {
                    Log.Error($"Cast AsyncInvild {castInstanceId} , {casterInstanceId}");
                    return;
                }
            }

            cast.CastFinish();
        }

        public static bool CheckAsyncInvalid(this Cast cast, long castInstanceId, long casterInstanceId)
        {
            Unit unit = cast.Caster;
            if (unit == null || unit.IsDisposed)
                return false;
            if (cast.InstanceId != castInstanceId || casterInstanceId != unit.InstanceId)
                return false;
            return true;
        }

        public static void HandleSelfHit(this Cast cast, int index)
        {
            CastConfig castConfig = cast.Config;
            cast.SelectTarget();
            if (cast.Target.Count <= 0)
                return;
            Unit caster = cast.Caster;
            M2C_CastHit m2CCastHit = M2C_CastHit.Create();
            m2CCastHit.CastId = cast.Id;
            m2CCastHit.CasterId = caster.Id;
            m2CCastHit.TargetsId = new List<long>(cast.Target);
            MMOMessageHelper.SendClient(caster, m2CCastHit, castConfig.NoticeClientType);
            if (castConfig.SelfHitAction.Length > index)
            {
                int actionId = castConfig.SelfHitAction[index];
                cast.CreateActions(actionId, cast.Caster, ActionsRunType.CastHit);
            }

            if (castConfig.SelfBuffs.Length > index)
            {
                int buffId = castConfig.SelfBuffs[index];
                if (buffId != 0)
                {
                    caster.GetComponent<BuffComponent>()?.CreateAndAdd(buffId);
                }
            }
        }

        public static void HandleTargetHit(this Cast cast, int index)
        {
            CastConfig castConfig = cast.Config;
            cast.SelectTarget();
            if (cast.Target.Count <= 0)
                return;
            Unit caster = cast.Caster;
            M2C_CastHit m2CCastHit = M2C_CastHit.Create();
            m2CCastHit.CastId = cast.Id;
            m2CCastHit.CasterId = caster.Id;
            m2CCastHit.TargetsId = new List<long>(cast.Target);
            MMOMessageHelper.SendClient(caster, m2CCastHit, castConfig.NoticeClientType);

            UnitComponent unitComponent = cast.Root().GetComponent<UnitComponent>();
            foreach (long unitId in cast.Target)
            {
                Unit unit = unitComponent.Get(unitId);
                if (unit == null || unit.IsDisposed)
                    continue;
                if (castConfig.HitAction.Length > index)
                {
                    int actionId = castConfig.HitAction[index];
                    cast.CreateActions(actionId, unit, ActionsRunType.CastHit);
                }

                if (castConfig.Buffs.Length > index)
                {
                    int buffId = castConfig.Buffs[index];
                    if (buffId != 0)
                    {
                        unit.GetComponent<BuffComponent>().CreateAndAdd(buffId);
                    }
                }
            }
        }

        public static void CastFinish(this Cast cast)
        {
            //没有持续时间，就是瞬发的技能流程，可以不用通知结束，客户端自行结束
            if (cast.Config.TotalTime > 0)
            {
                Unit caster = cast.Caster;
                M2C_CastFinish m2CCastFinish = M2C_CastFinish.Create();
                m2CCastFinish.CastId = cast.Id;
                m2CCastFinish.CasterId = caster.Id;
                MMOMessageHelper.SendClient(caster, m2CCastFinish, cast.Config.NoticeClientType);
            }

            cast?.Dispose();
        }
    }
}