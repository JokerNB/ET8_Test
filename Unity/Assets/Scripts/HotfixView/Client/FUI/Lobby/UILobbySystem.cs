namespace ET.Client
{
	[FriendOf(typeof(UILobby))]
	public static class UILobbySystem
	{
		public static void Awake(this UILobby self)
		{
		}

		public static void RegisterUIEvent(this UILobby self)
		{
			self.FUIUILobby.Button_EntryMap.AddListner(()=>
			{
				self.EnterMap().Coroutine();
			});
		}

		public static void OnShow(this UILobby self, Entity contextData = null)
		{
		}

		public static void OnHide(this UILobby self)
		{
		}

		public static void BeforeUnload(this UILobby self)
		{
		}
		
		public static async ETTask EnterMap(this UILobby self)
		{
			Scene root = self.Root();
			root.GetComponent<FUIComponent>().ClosePanel(PanelId.UILobby);
			await LoadingPanelHelper.OpenSetLoading(root,10);
			await EnterMapHelper.EnterMapAsync(root);
		}
	}
}