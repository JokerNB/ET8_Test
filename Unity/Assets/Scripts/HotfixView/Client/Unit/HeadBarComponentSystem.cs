using ET.Client.HeadBarPanel;
using FairyGUI;
using UnityEngine;

namespace ET.Client;

[EntitySystemOf(typeof(HeadBarComponent))]
[FriendOf(typeof(HeadBarComponent))]
public static partial class HeadBarComponentSystem
{
    [EntitySystem]
    private static void Awake(this ET.Client.HeadBarComponent self)
    {
        LoadHeadBraPanelUI(self).Coroutine();
    }

    [EntitySystem]
    private static void Update(this ET.Client.HeadBarComponent self)
    {
        UpdateHeadBarPanelPos(self);
    }
    
    [EntitySystem]
    private static void Destroy(this ET.Client.HeadBarComponent self)
    {
        self.FuiUIHearBarPanel.Dispose();
        self.FuiUIHearBarPanel = null;
    }

    private static async ETTask LoadHeadBraPanelUI(HeadBarComponent self)
    {
        var headBarPanel = await self.Root().GetComponent<FUIAssetComponent>().CreateObjectAsync("HeadBarPanel", "UIHeadBarPanel");
        FUIRootHelper.GetTargetRoot(UIPanelType.HeadBar, self.Root()).AddChild(headBarPanel);
        self.FuiUIHearBarPanel = headBarPanel as FUI_UIHeadBarPanel;
        self.FuiUIHearBarPanel.NickName.text = self.Root().GetComponent<PlayerComponent>().NickName;
        UpdateHeadBarPanelPos(self);
    }

    private static void UpdateHeadBarPanelPos(HeadBarComponent self)
    {
        if (self.FuiUIHearBarPanel == null)
            return;
        var unit = self.Parent as Unit;
        //获取人物位置 3d=>2d
        var screenPoint = Camera.main.WorldToScreenPoint(unit.Position);
        screenPoint.y = Screen.height - screenPoint.y;
        var pt = GRoot.inst.GlobalToLocal(screenPoint);

        self.FuiUIHearBarPanel.SetXY(pt.x, pt.y - 50);
    }
}