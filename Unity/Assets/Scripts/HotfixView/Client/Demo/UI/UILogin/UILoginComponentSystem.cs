using System.Text.RegularExpressions;
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
			//Account限制在4-8位数，不能有下划线及其他特殊字符
			var account_IsMatch = Regex.IsMatch(account, @"\b(?!-_)\w[4,8]\b");
			//Password限制：
			//开头大写，限制在6-12位数，不包含特殊字符
			var password_IsMatch = Regex.IsMatch(password, @"\b(?!-_)\w[6,12]\b");
			
			if (!account_IsMatch || !password_IsMatch)
				return;
			
			LoginHelper.Login(
				self.Root(), 
				self.account.GetComponent<InputField>().text, 
				self.password.GetComponent<InputField>().text).Coroutine();
		}
	}
}
