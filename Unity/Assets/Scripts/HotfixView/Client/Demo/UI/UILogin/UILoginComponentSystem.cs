using UnityEngine;
using UnityEngine.UI;

namespace ET.Client
{
	[EntitySystemOf(typeof(UILoginComponent))]
	[FriendOf(typeof(UILoginComponent))]
	public static partial class UILoginComponentSystem
	{
		[EntitySystem]
		private static void Awake(this UILoginComponent self)
		{
			ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();
			self.loginBtn = rc.Get<GameObject>("LoginBtn");
			
			self.loginBtn.GetComponent<Button>().onClick.AddListener(()=> { self.OnLogin(); });
			self.account = rc.Get<GameObject>("Account");
			self.password = rc.Get<GameObject>("Password");
		}

		
		public static void OnLogin(this UILoginComponent self)
		{
			var account = self.account.GetComponent<InputField>().text;
			var password = self.password.GetComponent<InputField>().text;
			var checkRegexMatchComponent = self.Root().AddComponent<CheckRegexMatchComponent>();
			//Account限制在4-8位数，不能有下划线及其他特殊字符
			var account_IsMatch = checkRegexMatchComponent.isMatchAccount(account);
			//Password限制：
			var password_IsMatch = checkRegexMatchComponent.isMatchPassword(password);

			if (!account_IsMatch || !password_IsMatch)
			{
				self.Root().RemoveComponent<CheckRegexMatchComponent>();
				return;
			}

			self.Root().RemoveComponent<CheckRegexMatchComponent>();
			LoginHelper.Login(
				self.Root(), 
				self.account.GetComponent<InputField>().text, 
				self.password.GetComponent<InputField>().text).Coroutine();
		}
	}
}
