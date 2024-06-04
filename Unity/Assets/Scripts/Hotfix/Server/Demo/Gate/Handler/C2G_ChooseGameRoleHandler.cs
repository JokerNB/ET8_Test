namespace ET.Server
{
    [MessageSessionHandler(SceneType.Gate)]
    public class C2G_ChooseGameRoleHandler : MessageSessionHandler<C2G_ChooseGameRole>
    {
        protected override async ETTask Run(Session session, C2G_ChooseGameRole message)
        {
            Log.Error("C2M_ChooseGameRoleHandler");
            var id = message.UnitConfigId;
            var playerId = message.PlayerId;
            RoleInfo roleInfo = session.Root().GetComponent<RolesInfoManagerComponent>().Get(id);
            if (roleInfo == null)
                return;
            Log.Error("C2M_ChooseGameRoleHandler  CreateUnit");
            // 在Gate上动态创建一个Map Scene，把Unit从DB中加载放进来，然后传送到真正的Map中，这样登陆跟传送的逻辑就完全一样了
            Player player = session.GetComponent<SessionPlayerComponent>().Player;
            GateMapComponent gateMapComponent = player.AddComponent<GateMapComponent>();
            gateMapComponent.Scene = await GateMapFactory.Create(gateMapComponent, player.Id, IdGenerater.Instance.GenerateInstanceId(), "GateMap");

            Scene scene = gateMapComponent.Scene;
            Unit unit = UnitFactory.Create(scene, playerId, id);

            // // 通知客户端创建My Unit
            // M2C_CreateMyUnit m2CCreateUnits = M2C_CreateMyUnit.Create();
            // m2CCreateUnits.Unit = UnitHelper.CreateUnitInfo(unit);
            // MapMessageHelper.SendToClient(unit, m2CCreateUnits);

            // 等到一帧的最后面再传送，先让G2C_EnterMap返回，否则传送消息可能比G2C_EnterMap还早
            StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.Maps[0];
            TransferHelper.TransferAtFrameFinish(unit, startSceneConfig.ActorId).Coroutine();

            await ETTask.CompletedTask;
        }
    }
}