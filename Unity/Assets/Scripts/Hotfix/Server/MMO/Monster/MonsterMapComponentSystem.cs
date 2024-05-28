using Unity.Mathematics;

namespace ET.Server
{
    [EntitySystemOf(typeof(MonsterFlag))]
    [FriendOfAttribute(typeof(ET.Server.MonsterFlag))]
    public static partial class MonsterFlagSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.MonsterFlag self, int args2, int args3)
        {
            self.ConfigId = args2;
            self.GroupConfigId = args3;
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.MonsterFlag self)
        {
            self.Root().GetComponent<MonsterMapComponent>().OnMonsterDead(self.ConfigId, self.GroupConfigId);
        }
    }

    [EntitySystemOf(typeof(CreateMonsterInfo))]
    [FriendOfAttribute(typeof(ET.Server.CreateMonsterInfo))]
    public static partial class CreateMonsterInfoSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.CreateMonsterInfo self, int args2)
        {
            self.monsterId = args2;
        }
    }

    [Invoke(TimerInvokeType.CreateMonster)]
    [FriendOfAttribute(typeof(ET.Server.CreateMonsterInfo))]
    public class CreateMonster_TimerHandler : ATimer<CreateMonsterInfo>
    {
        protected override void Run(CreateMonsterInfo t)
        {
            t.GetParent<MonsterMapComponent>().CreateMonster(t.monsterId);
        }
    }

    [Invoke(TimerInvokeType.MonsterDead)]
    public class MonsterDead_TimerHandler : ATimer<Unit>
    {
        protected override void Run(Unit t)
        {
            t?.Dispose();
        }
    }

    [EntitySystemOf(typeof(MonsterMapComponent))]
    [FriendOfAttribute(typeof(ET.Server.MonsterMapComponent))]
    public static partial class MonsterMapComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.MonsterMapComponent self)
        {
        }
        [EntitySystem]
        private static void Destroy(this ET.Server.MonsterMapComponent self)
        {
            self.GroupId_UnitsDic.Clear();
        }

        public static void EntryMapCreateAllMonster(this MonsterMapComponent self, Unit unit1)
        {
            M2C_CreateUnits m2CCreateUnits = M2C_CreateUnits.Create();
            foreach (MonsterConfig monsterConfig in MonsterConfigCategory.Instance.DataList)
            {
                Unit unit = self.CreateMonster(monsterConfig.Id);
                var unitInfo = UnitHelper.CreateUnitInfo(unit);
                m2CCreateUnits.Units.Add(unitInfo);
            }
            MapMessageHelper.SendToClient(unit1,m2CCreateUnits);
        }

        public static Unit CreateMonster(this MonsterMapComponent self, int Id)
        {
            MonsterConfig monsterConfig = MonsterConfigCategory.Instance.Get(Id);
            MonsterGroupConfig monsterGroupConfig = MonsterGroupConfigCategory.Instance.Get(monsterConfig.GroupId);

            int h_range = monsterGroupConfig.Range / 2;
            var randomRange = RandomGenerator.RandomNumber(-h_range, h_range);
            float3 pos = new float3(monsterGroupConfig.PosX + randomRange, monsterGroupConfig.PosY, monsterGroupConfig.PosZ + randomRange);
            Unit unit = UnitFactory.CreateMonster(self.Root(), monsterConfig.UnitConfigId, pos, Id);
            unit.AddComponent<MonsterFlag, int, int>(Id, monsterConfig.GroupId);
            unit.AddComponent<AOIEntity, int, float3>(monsterConfig.AOIRange * 1000, unit.Position);
            if(self.GroupId_UnitsDic.ContainsKey(monsterConfig.GroupId))
                self.GroupId_UnitsDic[monsterConfig.GroupId].Add(unit);
            else
                self.GroupId_UnitsDic.Add(monsterConfig.GroupId, new ListComponent<EntityRef<Unit>>() { unit });
            return unit;
        }

        public static void OnMonsterDead(this MonsterMapComponent self, int id, int groupId)
        {
            self.Root().GetComponent<TimerComponent>().NewOnceTimer(TimeInfo.Instance.ServerNow() + 3000, TimerInvokeType.CreateMonster, self.AddChild<CreateMonsterInfo, int>(id));
        }

    }
}