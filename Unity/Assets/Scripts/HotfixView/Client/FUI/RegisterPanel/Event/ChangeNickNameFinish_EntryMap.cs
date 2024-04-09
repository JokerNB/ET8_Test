namespace ET.Client
{

    [Event(SceneType.Demo)]
    public class ChangeNickNameFinish_EntryMap : AEvent<Scene, ChangeNickNameFinish>
    {
        protected override async ETTask Run(Scene scene, ChangeNickNameFinish a)
        {
            scene.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UIRegister);
            await LoadingPanelHelper.OpenSetLoading(scene, 10);
            await EnterMapHelper.EnterMapAsync(scene);
        }
    }
}