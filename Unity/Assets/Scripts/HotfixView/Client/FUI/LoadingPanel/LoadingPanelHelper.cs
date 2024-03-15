using ET.Client.LoadingPanel;

namespace ET.Client
{
    [FriendOf(typeof (UILoadingPanel))]
    public static class LoadingPanelHelper
    {
        public static async ETTask OpenSetLoading(Scene scene, uint totalTime)
        {
            var fuiComponent = scene.Root().GetComponent<FUIComponent>();
            var loadingPanelContextData = fuiComponent.AddChild<LoadingPanel_ContextData,uint>(totalTime);
            await fuiComponent.ShowPanelAsync(PanelId.UILoadingPanel,loadingPanelContextData);
        }
    }
}