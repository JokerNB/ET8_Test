using ET.Client.LoadingPanel;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UILoadingPanel: Entity, IAwake
	{
		private FUI_UILoadingPanel _fuiUILoadingPanel;
		public FUI_UILoadingPanel_ProgressItem[] items;

		public FUI_UILoadingPanel FUIUILoadingPanel
		{
			get => _fuiUILoadingPanel ??= (FUI_UILoadingPanel)this.GetParent<FUIEntity>().GComponent;
		}
	}
}
