/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.Login
{
	public partial class FUI_UILogin: GComponent
	{
		public GTextInput Account;
		public GTextInput Password;
		public const string URL = "ui://ykcsql7pe3ky0";

		public static FUI_UILogin CreateInstance()
		{
			return (FUI_UILogin)UIPackage.CreateObject("Login", "UILogin");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			Account = (GTextInput)GetChildAt(0);
			Password = (GTextInput)GetChildAt(1);
		}
	}
}
