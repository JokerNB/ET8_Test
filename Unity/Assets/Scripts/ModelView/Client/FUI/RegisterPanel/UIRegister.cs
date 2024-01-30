using ET.Client.RegisterPanel;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UIRegister: Entity, IAwake
	{
		private FUI_UIRegister _fuiUIRegister;

		public FUI_UIRegister FUIUIRegister
		{
			get => _fuiUIRegister ??= (FUI_UIRegister)this.GetParent<FUIEntity>().GComponent;
		}
	}
}
