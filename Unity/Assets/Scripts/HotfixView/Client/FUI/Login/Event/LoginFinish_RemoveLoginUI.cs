namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class LoginFinish_RemoveLoginUI : AEvent<Scene,LoginAccountFinish>
    {
        protected override async ETTask Run(Scene scene, LoginAccountFinish a)
        { 
            scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UILogin);
            await ETTask.CompletedTask;
        }
    }
}