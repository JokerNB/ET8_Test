namespace ET.Server
{
    [MessageLocationHandler(SceneType.Map)]
    public class C2M_TransferMapHandler : MessageLocationHandler<Unit, C2M_TransferMap, M2C_TransferMap>
    {
        protected override async ETTask Run(Unit unit, C2M_TransferMap request, M2C_TransferMap response)
        {
            // StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.Get(MapConfigCategory.Instance.Get(request.MapConfigId).StartSceneConfigId);
            // TransferHelper.TransferAtFrameFinish(unit, startSceneConfig.ActorId, request.MapConfigId).Coroutine();
            await ETTask.CompletedTask;
        }
    }
}