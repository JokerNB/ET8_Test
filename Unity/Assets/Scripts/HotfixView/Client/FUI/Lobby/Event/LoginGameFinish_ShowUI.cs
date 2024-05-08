namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginGameFinish_ShowUI : AEvent<Scene, LoginGameFinish>
    {
        protected override async ETTask Run(Scene scene, LoginGameFinish a)
        {
            scene.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILobby);
            if (string.IsNullOrEmpty(scene.Root().GetComponent<PlayerComponent>().NickName))
                await scene.Root().GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UIRegister);
            else
            {
                await LoadingPanelHelper.OpenSetLoading(scene, 10);
                await EnterMapHelper.EnterMapAsync(scene);
            }
        }
    }
}