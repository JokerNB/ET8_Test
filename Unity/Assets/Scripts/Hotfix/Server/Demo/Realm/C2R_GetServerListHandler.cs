namespace ET.Server
{
    [MessageHandler(SceneType.Realm)]
    public class C2R_GetServerListHandler : MessageHandler<Scene,C2R_GetServerList,R2C_GetServerList>
    {
        protected override async ETTask Run(Scene unit, C2R_GetServerList request, R2C_GetServerList response)
        {
            await ETTask.CompletedTask;
        }
    }
}