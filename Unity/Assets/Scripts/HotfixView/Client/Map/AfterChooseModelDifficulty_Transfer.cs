namespace ET.Client;

[Event(SceneType.Demo)]
public class AfterChooseModelDifficulty_Transfer : AEvent<Scene,AfterChooseModelDifficulty>
{
    protected override async ETTask Run(Scene scene, AfterChooseModelDifficulty a)
    {
        await scene.GetComponent<ClientSenderCompnent>().Call(new C2M_TransferMap());
        scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UIChooseDifficulty);
    }
}