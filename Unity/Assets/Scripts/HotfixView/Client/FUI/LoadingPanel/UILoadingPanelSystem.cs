using ET.Client.LoadingPanel;

namespace ET.Client
{
    [FriendOf(typeof (UILoadingPanel))]
    public static class UILoadingPanelSystem
    {
        public static void Awake(this UILoadingPanel self)
        {
            InitProgress(self);
        }

        public static void RegisterUIEvent(this UILoadingPanel self)
        {
        }

        public static void OnShow(this UILoadingPanel self, Entity contextData = null)
        {
            var idx = RandomGenerator.RandomNumber(0, 5);
            self.FUIUILoadingPanel.BG.SetSelectedIndex(idx);
            CloseSelf(self).Coroutine();
        }

        public static void OnHide(this UILoadingPanel self)
        {
        }

        public static void BeforeUnload(this UILoadingPanel self)
        {
        }

        public static async ETTask CloseSelf(UILoadingPanel self)
        {
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            SetProgress(self, 2);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            SetProgress(self, 5);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            SetProgress(self, 7);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(2 * 1000);
            SetProgress(self, 9);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            self.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILoadingPanel);
        }


        public static void InitProgress(UILoadingPanel self)
        {
            self.items = new FUI_UILoadingPanel_ProgressItem[10];
            self.items[0] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress1;
            self.items[1] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress2;
            self.items[2] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress3;
            self.items[3] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress4;
            self.items[4] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress5;
            self.items[5] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress6;
            self.items[6] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress7;
            self.items[7] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress8;
            self.items[8] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress9;
            self.items[9] = self.FUIUILoadingPanel.UILoadingPanel_Progress.Progress10;
        }

        public static void SetProgress(UILoadingPanel self, int progress)
        {
            for (int i = 0; i < 10; i++)
            {
                self.items[i].State.SetSelectedIndex(i <= progress? 1 : 0);
            }
        }
    }
}