using System;
using UnityEngine;

namespace ET.Client
{
	[FriendOf(typeof(PanelCoreData))]
	[FriendOf(typeof(FUIEntity))]
	[FUIEvent(PanelId.UILoadingPanel, "LoadingPanel", "UILoadingPanel")]
	public class UILoadingPanelEventHandler: IFUIEventHandler
	{
		public void OnInitPanelCoreData(FUIEntity fuiEntity)
		{
			fuiEntity.PanelCoreData.panelType = UIPanelType.PopUp;
		}

		public void OnInitComponent(FUIEntity fuiEntity)
		{
			UILoadingPanel panel = fuiEntity.AddComponent<UILoadingPanel>();
			panel.Awake();
		}

		public void OnRegisterUIEvent(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UILoadingPanel>().RegisterUIEvent();
		}

		public void OnShow(FUIEntity fuiEntity, Entity contextData = null)
		{
			fuiEntity.GetComponent<UILoadingPanel>().OnShow(contextData);
		}

		public void OnHide(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UILoadingPanel>().OnHide();
		}

		public void BeforeUnload(FUIEntity fuiEntity)
		{
			fuiEntity.GetComponent<UILoadingPanel>().BeforeUnload();
		}
	}
}