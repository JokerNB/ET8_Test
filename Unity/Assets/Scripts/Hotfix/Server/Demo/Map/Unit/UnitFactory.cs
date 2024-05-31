using System;
using Unity.Mathematics;

namespace ET.Server
{
    [FriendOfAttribute(typeof(ET.Server.BulletComponent))]
    public static partial class UnitFactory
    {
        public static Unit Create(Scene scene, long id,int configId)
        {
            UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
            UnitConfig unitConfig = UnitConfigCategory.Instance.Get(configId);
            switch (unitConfig.UnitType)
            {
                case UnitType.Player:
                    {
                        Unit unit = unitComponent.AddChildWithId<Unit, int>(id, configId);
                        unit.AddComponent<MoveComponent>();
                        int heroConfigId = unit.Config().PropertyConfigId;
                        var heroConfig = HeroConfigCategory.Instance.Get(heroConfigId);
                        //设置UnitPos
                        // float3 unitPos = new float3();
                        // MapConfig mapConfig = MapConfigHelper.GetConfigBySceneName(scene.Name);
                        // unitPos.x = mapConfig.BirthPosX;
                        // unitPos.y = mapConfig.BirthPosY;
                        // unitPos.z = mapConfig.BirthPosZ;
                        //
                        // unit.Position = unitPos;

                        NumericComponent numericComponent = unit.AddComponent<NumericComponent>();
                        numericComponent.Set(NumericType.Speed, heroConfig.Speed);
                        numericComponent.Set(NumericType.AOI, heroConfig.AOIRange * 1000);

                        unitComponent.Add(unit);

                        // 加入aoi
                        unit.AddComponent<AOIEntity, int, float3>(heroConfig.AOIRange * 1000, unit.Position);
                        unit.AddComponent<CastComponent>();
                        unit.AddComponent<BuffComponent>();
                        unit.AddComponent<SkillStatusComponent>();
                        return unit;
                    }
                default:
                    throw new Exception($"not such unit type: {unitConfig.UnitType}");
            }
        }

        /// <summary>
        /// 创建子弹
        /// </summary>
        /// <param name="scene"></param>
        /// <param name="ownerId"></param>
        /// <param name="unitConfigId"></param>
        /// <param name="bulletId"></param>
        /// <param name="pos"></param>
        /// <returns></returns>
        public static Unit CreateBullet(Scene scene, long ownerId, int unitConfigId, int bulletId, float3 pos)
        {
            UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
            Unit unit = unitComponent.AddChild<Unit, int>(unitConfigId);
            unit.Position = pos;
            BulletComponent bulletComponent = unit.AddComponent<BulletComponent, int>(bulletId);
            bulletComponent.OwnerId = ownerId;
            unitComponent.Add(unit);
            return unit;
        }

        public static Unit CreateMonster(Scene scene, int unitConfigId, int monsterConfigId)
        {
            UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
            Unit unit = unitComponent.AddChild<Unit, int>(unitConfigId);
            unit.AddComponent<MoveComponent>();
            // unit.Position = pos;

            NumericComponent numericComponent = unit.AddComponent<NumericComponent>();
            MonsterConfig monsterConfig = MonsterConfigCategory.Instance.Get(monsterConfigId);

            numericComponent.Set(NumericType.Speed, monsterConfig.Speed);
            numericComponent.Set(NumericType.AOI, monsterConfig.AOIRange * 1000);
            numericComponent.Set(NumericType.MaxHp, monsterConfig.HP);
            numericComponent.Set(NumericType.Hp, monsterConfig.HP);

            unit.AddComponent<ReliveComponent>();
            unitComponent.Add(unit);
            return unit;
        }
    }
}