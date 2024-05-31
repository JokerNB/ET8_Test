/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.ChooseGameRole
{
	[EnableClass]
	public partial class FUI_UIGameRoleItem: GComponent
	{
		public GTextField ID;
		public GTextField Name;
		public const string URL = "ui://aj5lip0osns51";

		public static FUI_UIGameRoleItem CreateInstance()
		{
			return (FUI_UIGameRoleItem)UIPackage.CreateObject("ChooseGameRole", "UIGameRoleItem");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			ID = (GTextField)GetChildAt(0);
			Name = (GTextField)GetChildAt(1);
		}
	}
}
