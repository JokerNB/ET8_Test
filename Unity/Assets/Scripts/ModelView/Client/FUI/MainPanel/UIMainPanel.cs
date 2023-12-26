using ET.Client.MainPanel;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UIMainPanel: Entity, IAwake
	{
		private FUI_UIMainPanel _fuiUIMainPanel;

		public FUI_UIMainPanel FUIUIMainPanel
		{
			get => _fuiUIMainPanel ??= (FUI_UIMainPanel)this.GetParent<FUIEntity>().GComponent;
		}
	}
}
