using System.Collections.Generic;
using ET.Client.Lobby;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UILobby: Entity, IAwake
	{
		private FUI_UILobby _fuiUILobby;

		public FUI_UILobby FUIUILobby
		{
			get => _fuiUILobby ??= (FUI_UILobby)this.GetParent<FUIEntity>().GComponent;
		}

		public EntityRef<ServerInfo> _ServerInfo = null;
		public int _curSelectIdx = -1;
	}
}
