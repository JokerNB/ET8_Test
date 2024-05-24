using System.Threading.Tasks;
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
            self.WaitUI();
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
            Unit unit = self.GetParent<Unit>();
            self._UIPanel = unit.GetComponent<GameObjectComponent>().GameObject.GetComponentInChildren<UIPanel>();
            var gCom = self._UIPanel.ui;
            if (gCom == null)
            {
                self.isWaitUI = true;
            }
            else
            {
                gCom.GetChild("NickName").asTextField.text = self.Root().GetComponent<PlayerComponent>().NickName;
            }

            await ETTask.CompletedTask;
        }

        private static void UpdateHeadBarPanel(this HeadBarComponent self)
        {
            if (self.MainCamera == null)
                return;
            if (self._UIPanel == null)
                return;
            self._UIPanel.transform.forward = self.MainCamera.transform.forward;
            Unit unit = self.GetParent<Unit>();
            var pos = new Vector3(unit.Position.x, unit.Position.y + 2.45f, unit.Position.z);
            self._UIPanel.transform.position = pos;
        }

        private static void WaitUI(this HeadBarComponent self)
        {
            if(!self.isWaitUI)
                return;
            if (self._UIPanel.ui != null)
            {
                self._UIPanel.ui.GetChild("NickName").asTextField.text = self.Root().GetComponent<PlayerComponent>().NickName;
                self.isWaitUI = false;
            }
        }
    }
}