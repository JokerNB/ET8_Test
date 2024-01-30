using System;
using UnityEngine;

namespace ET.Client
{
	[FriendOf(typeof(PanelCoreData))]
	[FriendOf(typeof(FUIEntity))]
	[FUIEvent(PanelId.UIRegister, "RegisterPanel", "UIRegister")]
	public class UIRegisterEventHandler: IFUIEventHandler
	{
		public void OnInitPanelCoreData(FUIEntity fuiEntity)
		{
			fuiEntity.PanelCoreData.panelType = UIPanelType.Normal;
		}

		public void OnInitComponent(FUIEntity fuiEntity)
		{
			UIRegister panel = fuiEntity.AddComponent<UIRegister>();
			panel.Awake();
		}

		public void OnRegisterUIEvent(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UIRegister>().RegisterUIEvent();
		}

		public void OnShow(FUIEntity fuiEntity, Entity contextData = null)
		{
			fuiEntity.GetComponent<UIRegister>().OnShow(contextData);
		}

		public void OnHide(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UIRegister>().OnHide();
		}

		public void BeforeUnload(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UIRegister>().BeforeUnload();
		}
	}
}