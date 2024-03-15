namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class AfterChooseModelDifficulty_Transfer : AEvent<Scene,AfterChooseModelDifficulty>
    {
        protected override async ETTask Run(Scene scene, AfterChooseModelDifficulty a)
        {
            LoadingPanelHelper.OpenSetLoading(scene, 20).Coroutine();
            C2M_TransferMap c2MTransferMap = C2M_TransferMap.Create();
            await scene.GetComponent<ClientSenderComponent>().Call(c2MTransferMap);
            scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UIChooseDifficulty);
            //添加资源怪组件
        
        }
    }
}