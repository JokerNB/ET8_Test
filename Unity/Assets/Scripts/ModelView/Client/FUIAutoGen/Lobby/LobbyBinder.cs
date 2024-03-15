/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;

namespace ET.Client
{
	[EnableClass]
	public class LobbyBinder
	{
		public static void BindAll()
		{
			UIObjectFactory.SetPackageItemExtension(ET.Client.Lobby.FUI_UILobby.URL, typeof(ET.Client.Lobby.FUI_UILobby));
			UIObjectFactory.SetPackageItemExtension(ET.Client.Lobby.FUI_Button_EntryMap.URL, typeof(ET.Client.Lobby.FUI_Button_EntryMap));
			UIObjectFactory.SetPackageItemExtension(ET.Client.Lobby.FUI_UISeverInfoItem.URL, typeof(ET.Client.Lobby.FUI_UISeverInfoItem));
		}
	}
}
