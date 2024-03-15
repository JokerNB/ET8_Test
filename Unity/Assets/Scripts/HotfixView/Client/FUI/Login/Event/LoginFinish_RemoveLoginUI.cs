namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginFinish_RemoveLoginUI : AEvent<Scene,LoginFinish>
    {
        protected override async ETTask Run(Scene scene, LoginFinish a)
        { 
            scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UILogin);
            await ETTask.CompletedTask;
        }
    }
}