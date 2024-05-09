using ET.Client.HeadBarPanel;
using FairyGUI;
using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(HeadBarComponent))]
    [FriendOf(typeof(HeadBarComponent))]
    public static partial class HeadBarComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.HeadBarComponent self)
        {
            self.LoadHeadBraPanelUI().Coroutine();
        }

        [EntitySystem]
        private static void Update(this ET.Client.HeadBarComponent self)
        {
            self.UpdateHeadBarPanel();
        }

        [EntitySystem]
        private static void Destroy(this ET.Client.HeadBarComponent self)
        {
            if (self._UIPanel != null)
            {
                self._UIPanel.container.Dispose();
                self._UIPanel = null;
            }
        }

        private static async ETTask LoadHeadBraPanelUI(this HeadBarComponent self)
        {
            self.MainCamera = Camera.main;
            var parent = self.Root().GetComponent<GlobalComponent>().Unit;
            GameObject go = new GameObject("HeadBarPoint");
            go.transform.parent = parent;
            UIPanel uiPanel = go.AddComponent<UIPanel>();
            uiPanel.packageName = "HeadBarPanel";
            uiPanel.componentName = "UIHeadBarPanel";
            uiPanel.container.renderMode = RenderMode.WorldSpace;
            uiPanel.container.renderCamera = StageCamera.main;
            uiPanel.container.touchable = false;
            uiPanel.container.cachedTransform.localScale = Vector3.one * 0.015f;
            uiPanel.CreateUI();
            self._UIPanel = uiPanel;
            var gCom = uiPanel.ui;
            if (gCom == null)
            {
                Log.Error("gCom == null");
            }
            var gText_NickName = gCom.GetChild("NickName").asTextField;
            gText_NickName.text = self.Root().GetComponent<PlayerComponent>().NickName;
        }

        private static void UpdateHeadBarPanel(this HeadBarComponent self)
        {
            if (self.MainCamera == null)
                return;
            if (self._UIPanel == null)
                return;
            self._UIPanel.container.cachedTransform.forward = self.MainCamera.transform.forward;
            Unit unit = self.GetParent<Unit>();
            var pos = new Vector3(unit.Position.x, unit.Position.y + 2.45f, unit.Position.z);
            self._UIPanel.container.cachedTransform.position = pos;
        }
    }
}