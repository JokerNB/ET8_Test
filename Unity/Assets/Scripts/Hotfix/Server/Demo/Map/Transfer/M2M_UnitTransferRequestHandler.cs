﻿using Unity.Mathematics;

namespace ET.Server
{
    [MessageHandler(SceneType.Map)]
    public class M2M_UnitTransferRequestHandler: MessageHandler<Scene, M2M_UnitTransferRequest, M2M_UnitTransferResponse>
    {
        protected override async ETTask Run(Scene scene, M2M_UnitTransferRequest request, M2M_UnitTransferResponse response)
        {
            UnitComponent unitComponent = scene.GetComponent<UnitComponent>();
            Unit unit = MongoHelper.Deserialize<Unit>(request.Unit);

            unitComponent.AddChild(unit);
            unitComponent.Add(unit);

            foreach (byte[] bytes in request.Entitys)
            {
                Entity entity = MongoHelper.Deserialize<Entity>(bytes);
                unit.AddComponent(entity);
            }

            unit.AddComponent<MoveComponent>();
            unit.AddComponent<PathfindingComponent, string>(scene.Name);
            //TODO:根据配置设置unit出生位置
            // var curMapConfig = MapConfigCategory.Instance.Get(request.MapConfigId);
            // unit.Position = new float3(curMapConfig.BirthPosX, curMapConfig.BirthPosY, curMapConfig.BirthPosZ);

            unit.AddComponent<MailBoxComponent, MailBoxType>(MailBoxType.OrderedMessage);

            // 通知客户端开始切场景
            M2C_StartSceneChange m2CStartSceneChange = M2C_StartSceneChange.Create();
            m2CStartSceneChange.SceneInstanceId = scene.InstanceId;
            m2CStartSceneChange.SceneName = scene.Name;
            m2CStartSceneChange.MapConfigId = request.MapConfigId;
            MapMessageHelper.SendToClient(unit, m2CStartSceneChange);

            // 通知客户端创建My Unit
            M2C_CreateMyUnit m2CCreateUnits = M2C_CreateMyUnit.Create();
            m2CCreateUnits.Unit = UnitHelper.CreateUnitInfo(unit);
            MapMessageHelper.SendToClient(unit, m2CCreateUnits);

            //TODO: 通知客户端创建怪物
            // if (curMapConfig.IsBattleMap)
            // {
            //     MonsterMapComponent monsterMapComponent = scene.AddComponent<MonsterMapComponent>();
            //     monsterMapComponent.EntryMapCreateAllMonster(unit);
            // }

            // 加入aoi
            var heroConfig = HeroConfigCategory.Instance.Get(unit.Config().PropertyConfigId);
            unit.AddComponent<AOIEntity, int, float3>(heroConfig.AOIRange * 1000, unit.Position);

            // 解锁location，可以接收发给Unit的消息
            await scene.Root().GetComponent<LocationProxyComponent>().UnLock(LocationType.Unit, unit.Id, request.OldActorId, unit.GetActorId());
        }
    }
}