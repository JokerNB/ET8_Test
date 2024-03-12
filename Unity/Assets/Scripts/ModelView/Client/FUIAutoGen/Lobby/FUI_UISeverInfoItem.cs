/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.Lobby
{
	public partial class FUI_UISeverInfoItem: GButton
	{
		public Controller States;
		public Controller SelectStates;
		public GTextField ServerName;
		public const string URL = "ui://5ldhuisnr7j21";

		public static FUI_UISeverInfoItem CreateInstance()
		{
			return (FUI_UISeverInfoItem)UIPackage.CreateObject("Lobby", "UISeverInfoItem");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			States = GetControllerAt(0);
			SelectStates = GetControllerAt(1);
			ServerName = (GTextField)GetChildAt(2);
		}
	}
}
