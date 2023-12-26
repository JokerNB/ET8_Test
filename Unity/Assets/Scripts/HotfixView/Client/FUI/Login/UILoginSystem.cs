namespace ET.Client
{
	[FriendOf(typeof(UILogin))]
	public static class UILoginSystem
	{
		public static void Awake(this UILogin self)
		{
		}

		public static void RegisterUIEvent(this UILogin self)
		{
			self.FUIUILogin.Button_Login.AddListner(() =>
			{
				var account = self.FUIUILogin.Account.text;
				var password = self.FUIUILogin.Password.text;
				LoginHelper.Login(self.Root(), account, password).Coroutine();
			});
		}

		public static void OnShow(this UILogin self, Entity contextData = null)
		{
		}

		public static void OnHide(this UILogin self)
		{
		}

		public static void BeforeUnload(this UILogin self)
		{
		}
	}
}