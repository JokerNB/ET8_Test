namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginAccountFinish_ShowUI: AEvent<Scene, LoginAccountFinish>
    {
        protected override async ETTask Run(Scene scene, LoginAccountFinish a)
        {
            await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UILobby);
        }
    }
}