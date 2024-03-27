namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginFinish_ShowUI: AEvent<Scene, LoginFinish>
    {
        protected override async ETTask Run(Scene scene, LoginFinish a)
        {
            await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UILobby);
        }
    }
}