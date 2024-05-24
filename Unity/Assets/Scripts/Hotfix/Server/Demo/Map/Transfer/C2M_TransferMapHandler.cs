namespace ET.Server
{
    [MessageLocationHandler(SceneType.Map)]
    [FriendOfAttribute(typeof(ET.Server.MapConfigComponent))]
    public class C2M_TransferMapHandler : MessageLocationHandler<Unit, C2M_TransferMap, M2C_TransferMap>
    {
        protected override async ETTask Run(Unit unit, C2M_TransferMap request, M2C_TransferMap response)
        {
            Log.Error($"SceneName == {unit.Root().Name} , {unit.Fiber().Root.Name}");
            var mapConfigComponent = unit.Root().GetComponent<MapConfigComponent>();
            mapConfigComponent.ChangeMap(request.MapConfigId);
            StartSceneConfig startSceneConfig = mapConfigComponent.StartSceneConfig_Cur;
            TransferHelper.TransferAtFrameFinish(unit, startSceneConfig.ActorId, request.MapConfigId).Coroutine();
            await ETTask.CompletedTask;
        }
    }
}