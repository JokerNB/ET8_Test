namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginGateFinish_ShowUI : AEvent<Scene, LoginGateFinish>
    {
        protected override async ETTask Run(Scene scene, LoginGateFinish a)
        {
            scene.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILobby);
            await LoadingPanelHelper.OpenSetLoading(scene, 10);
            await EnterMapHelper.EnterMapAsync(scene);
        }
    }
}