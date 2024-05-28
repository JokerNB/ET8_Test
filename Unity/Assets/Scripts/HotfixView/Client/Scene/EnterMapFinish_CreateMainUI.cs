namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class EnterMapFinish_CreateMainUI : AEvent<Scene,EnterMapFinish>
    {
        protected override async ETTask Run(Scene scene, EnterMapFinish a)
        {
            await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UIMainPanel);
        }
    }
}