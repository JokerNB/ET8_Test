/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.Login
{
	[EnableClass]
	public partial class FUI_UILogin: GComponent
	{
		public GTextInput Account;
		public GTextInput Password;
		public ET.Client.Login.FUI_Button_Login Button_Login;
		public const string URL = "ui://ykcsql7pe3ky0";

		public static FUI_UILogin CreateInstance()
		{
			return (FUI_UILogin)UIPackage.CreateObject("Login", "UILogin");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			Account = (GTextInput)GetChildAt(1);
			Password = (GTextInput)GetChildAt(2);
			Button_Login = (ET.Client.Login.FUI_Button_Login)GetChildAt(3);
		}
	}
}
