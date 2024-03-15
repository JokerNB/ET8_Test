/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.Lobby
{
	[EnableClass]
	public partial class FUI_UILobby: GComponent
	{
		public ET.Client.Lobby.FUI_Button_EntryMap Button_EntryMap;
		public GList ServerInfoList;
		public const string URL = "ui://5ldhuisnkoj00";

		public static FUI_UILobby CreateInstance()
		{
			return (FUI_UILobby)UIPackage.CreateObject("Lobby", "UILobby");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			Button_EntryMap = (ET.Client.Lobby.FUI_Button_EntryMap)GetChildAt(0);
			ServerInfoList = (GList)GetChildAt(1);
		}
	}
}
