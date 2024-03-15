using System.Collections.Generic;

namespace ET.Client
{
    [Event(SceneType.Demo)]
    public class AppStartInitFinish_CreateLoginUI : AEvent<Scene,AppStartInitFinish>
    {
        protected override async ETTask Run(Scene scene, AppStartInitFinish a)
        {
            await scene.GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UILogin);
        }
    }
}