namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class AfterChooseModelDifficulty_Transfer : AEvent<Scene, AfterChooseModelDifficulty>
    {
        protected override async ETTask Run(Scene scene, AfterChooseModelDifficulty a)
        {
            LoadingPanelHelper.OpenSetLoading(scene, 20).Coroutine();
            C2M_TransferMap c2MTransferMap = C2M_TransferMap.Create();
            c2MTransferMap.MapConfigId = a.MapConfigId;
            M2C_TransferMap m2CTransferMap = await scene.GetComponent<ClientSenderComponent>().Call(c2MTransferMap) as M2C_TransferMap;
            if (m2CTransferMap.Error != ErrorCode.ERR_Success)
                return;
            scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UIChooseDifficulty);
        }
    }
}