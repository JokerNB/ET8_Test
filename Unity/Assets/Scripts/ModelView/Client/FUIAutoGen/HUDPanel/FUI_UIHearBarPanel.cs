/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.HUDPanel
{
	public partial class FUI_UIHearBarPanel: GComponent
	{
		public GTextField NickName;
		public const string URL = "ui://1ddu8vqpoq3p0";

		public static FUI_UIHearBarPanel CreateInstance()
		{
			return (FUI_UIHearBarPanel)UIPackage.CreateObject("HUDPanel", "UIHearBarPanel");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			NickName = (GTextField)GetChildAt(0);
		}
	}
}
