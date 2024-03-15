/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.HeadBarPanel
{
	[EnableClass]
	public partial class FUI_UIHeadBarPanel: GComponent
	{
		public GTextField NickName;
		public GProgressBar HP;
		public GProgressBar MP;
		public const string URL = "ui://1ddu8vqpoq3p0";

		public static FUI_UIHeadBarPanel CreateInstance()
		{
			return (FUI_UIHeadBarPanel)UIPackage.CreateObject("HeadBarPanel", "UIHeadBarPanel");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			NickName = (GTextField)GetChildAt(0);
			HP = (GProgressBar)GetChildAt(1);
			MP = (GProgressBar)GetChildAt(2);
		}
	}
}
