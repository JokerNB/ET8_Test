using System;
using Unity.Mathematics;

namespace ET.Server
{
    [Invoke(TimerInvokeType.BulletTick)]
    public class BulletTick_TimerHandler : ATimer<BulletComponent>
    {
        protected override void Run(BulletComponent t)
        {
            t.Tick();
        }
    }

    [EntitySystemOf(typeof(BulletComponent))]
    [FriendOfAttribute(typeof(ET.Server.BulletComponent))]
    public static partial class BulletComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.BulletComponent self, int args2)
        {
            self.ConfigId = args2;
            self.AddComponent<ActionsTempComponent>();
        }
        [EntitySystem]
        private static void Destroy(this ET.Server.BulletComponent self)
        {
            self.PreDestroy();
            self.ConfigId = default;
        }

        public static void Start(this BulletComponent self)
        {
            Unit owner = self.GetOwner();
            if (owner == null)
            {
                self.Dispose();
                return;
            }

            Log.Error($"-> 子弹 {self.ConfigId} Tick");

            BulletConfig bulletConfig = self.Config;

            if (bulletConfig.AwakeAction.Length != 0)
            {
                foreach (int actionsId in bulletConfig.AwakeAction)
                {
                    self.CreateActions(actionsId, owner, owner, ActionsRunType.BulletAwake);
                }
            }

            if (bulletConfig.Interval > 0)
            {
                int interval = bulletConfig.Interval;
                if (interval <= 100)
                    interval = 100;

                self.TickTimer = self.Fiber().Root.GetComponent<TimerComponent>().NewRepeatedTimer(interval, TimerInvokeType.BulletTick, self);
            }
        }

        public static void PreDestroy(this BulletComponent self)
        {
            self.Fiber().Root.GetComponent<TimerComponent>().Remove(ref self.TickTimer);

            Unit owner = self.GetOwner();
            if(owner == null)
                return;
            BulletConfig bulletConfig = self.Config;

            if(bulletConfig.DestroyAction.Length == 0)
                return;

            foreach (int actionsId in bulletConfig.DestroyAction)
            {
                self.CreateActions(actionsId, owner, owner, ActionsRunType.BulletDestroy);
            }
        }

        public static Unit GetOwner(this BulletComponent self)
        {
            return self.Root().GetComponent<UnitComponent>().Get(self.OwnerId);
        }

        public static void Tick(this BulletComponent self)
        {
            Unit selfUnit = self.GetParent<Unit>();
            Unit owner = self.GetOwner();

            if (owner == null)
            {
                self.Dispose();
                return;
            }

            BulletConfig bulletConfig = self.Config;

            using (ListComponent<Unit> list = ListComponent<Unit>.Create())
            {
                switch (bulletConfig.Shape)
                {
                    case 1://选择身边一定范围内的一个人
                        int range = int.Parse(bulletConfig.ShapeParam[0]);

                        foreach (AOIEntity aoiEntity in selfUnit.GetBeSeePlayers().Values)
                        {
                            Unit unit = aoiEntity.GetParent<Unit>();
                            if(unit == owner)
                                //不选自己
                                continue;
                            if (math.length(unit.Position - selfUnit.Position) < range)
                                list.Add(unit);
                        }
                        break;
                    default:
                        throw new Exception($"not such BulletConfig Shape : {bulletConfig.Shape}");
                }

                if (list.Count > 0)
                {
                    foreach (Unit unit in list)
                    {
                        if (bulletConfig.TickCastId.Length > 0)
                        {
                            foreach (int tickCastId in bulletConfig.TickCastId)
                            {
                                owner.CreateAndCast(tickCastId);
                            }
                        }

                        if (bulletConfig.TickAction.Length > 0)
                        {
                            foreach (int actionsId in bulletConfig.TickAction)
                            {
                                self.CreateActions(actionsId, unit, self.GetOwner(), ActionsRunType.BulletTick);
                            }
                        }
                    }
                }
            }
        }
    }
}