/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;

namespace ET.Client
{
	[EnableClass]
	public class LoginBinder
	{
		public static void BindAll()
		{
			UIObjectFactory.SetPackageItemExtension(ET.Client.Login.FUI_UILogin.URL, typeof(ET.Client.Login.FUI_UILogin));
			UIObjectFactory.SetPackageItemExtension(ET.Client.Login.FUI_Button_Login.URL, typeof(ET.Client.Login.FUI_Button_Login));
			UIObjectFactory.SetPackageItemExtension(ET.Client.Login.FUI_Button_Register.URL, typeof(ET.Client.Login.FUI_Button_Register));
		}
	}
}
