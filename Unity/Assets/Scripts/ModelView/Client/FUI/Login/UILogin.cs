using ET.Client.Login;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UILogin: Entity, IAwake
	{
		private FUI_UILogin _fuiUILogin;

		public FUI_UILogin FUIUILogin
		{
			get => _fuiUILogin ??= (FUI_UILogin)this.GetParent<FUIEntity>().GComponent;
		}
	}
}
