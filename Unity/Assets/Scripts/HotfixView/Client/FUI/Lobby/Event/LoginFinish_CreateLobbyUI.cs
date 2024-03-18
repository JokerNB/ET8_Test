namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginFinish_CreateLobbyUI: AEvent<Scene, LoginFinish>
    {
        protected override async ETTask Run(Scene scene, LoginFinish a)
        {
            var isNewPlayer = scene.Root().GetComponent<PlayerComponent>().isNewPlayer;
            if (isNewPlayer || string.IsNullOrEmpty(scene.GetComponent<PlayerComponent>().NickName))
                await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UIRegister);
            else
                await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UILobby);
        }
    }
}