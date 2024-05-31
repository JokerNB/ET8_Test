using ET.Client.ChooseGameRole;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UIChooseGameRole: Entity, IAwake
	{
		private FUI_UIChooseGameRole _fuiUIChooseGameRole;

		public FUI_UIChooseGameRole FUIUIChooseGameRole
		{
			get => _fuiUIChooseGameRole ??= (FUI_UIChooseGameRole)this.GetParent<FUIEntity>().GComponent;
		}
	}
}
