/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.ChooseGameRole
{
	[EnableClass]
	public partial class FUI_UIChooseGameRole: GComponent
	{
		public GList GameRoleList;
		public const string URL = "ui://aj5lip0osns50";

		public static FUI_UIChooseGameRole CreateInstance()
		{
			return (FUI_UIChooseGameRole)UIPackage.CreateObject("ChooseGameRole", "UIChooseGameRole");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			GameRoleList = (GList)GetChildAt(0);
		}
	}
}
