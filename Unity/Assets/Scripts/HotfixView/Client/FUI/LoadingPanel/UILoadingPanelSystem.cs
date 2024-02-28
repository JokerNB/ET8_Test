using ET.Client.LoadingPanel;

namespace ET.Client
{
    [FriendOf(typeof (UILoadingPanel))]
    [FriendOf(typeof (LoadingPanel_ContextData))]
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
            if (contextData == null)
                CloseSelf(self).Coroutine();
            else if (contextData is LoadingPanel_ContextData)
            {
                var con = contextData as LoadingPanel_ContextData;
                SetTotalTime(self, con).Coroutine();
            }
            else
                self.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILoadingPanel);
        }

        public static void OnHide(this UILoadingPanel self)
        {
            self.CurProgress = 0;
        }

        public static void BeforeUnload(this UILoadingPanel self)
        {
        }

        public static async ETTask CloseSelf(UILoadingPanel self)
        {
            //根据contextData判定是否为自动设置时长及节点
            await SetProgress(self, 2, 1);
            await SetProgress(self, 5, 1);
            await SetProgress(self, 7, 1);
            await SetProgress(self, 9, 2);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            self.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILoadingPanel);
        }

        public static void InitProgress(UILoadingPanel self)
        {
            self.CurProgress = 0;
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

        public static async ETTask SetProgress(UILoadingPanel self, uint progress, uint waitTime)
        {
            if (self.CurProgress >= progress)
                return;
            self.CurProgress = progress;
            for (int i = 0; i < 10; i++)
            {
                self.items[i].State.SetSelectedIndex(i <= progress? 1 : 0);
            }

            await self.Root().GetComponent<TimerComponent>().WaitAsync(waitTime * 1000);
        }

        public static async ETTask SetTotalTime(this UILoadingPanel self, LoadingPanel_ContextData loadingPanelContextData)
        {
            var totalTime = loadingPanelContextData.totalTime;
            uint timeInterval = totalTime / 10;
            var timeInterval1 = timeInterval * 2;
            var timeInterval2 = timeInterval * 3;
            var timeInterval3 = timeInterval * 2;
            var timeInterval4 = timeInterval * 3;
            //默认分4个阶段
            await SetProgress(self, 2, timeInterval1);
            await SetProgress(self, 5, timeInterval2);
            await SetProgress(self, 7, timeInterval3);
            await SetProgress(self, 9, timeInterval4);
            await self.Root().GetComponent<TimerComponent>().WaitAsync(1 * 1000);
            self.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UILoadingPanel);
        }
    }
}