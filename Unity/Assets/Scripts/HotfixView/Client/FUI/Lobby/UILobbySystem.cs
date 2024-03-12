using ET.Client.Lobby;
using FairyGUI;

namespace ET.Client
{
    [FriendOf(typeof(UILobby))]
    [FriendOfAttribute(typeof(ET.ServerInfosComponent))]
    [FriendOfAttribute(typeof(ET.ServerInfo))]
    public static class UILobbySystem
    {
        public static void Awake(this UILobby self)
        {
            self.ServerZone = -1;
        }

        public static void RegisterUIEvent(this UILobby self)
        {
            self.FUIUILobby.Button_EntryMap.AddListner(() =>
            {
                self.EnterMap().Coroutine();
            });
            // var serverInfoList = self.FUIUILobby.ServerInfoList;
            // serverInfoList.itemRenderer = (index, item) => OnItemRender(self, index, item);
            // serverInfoList.onClickItem.Add(context => OnClickItem(self, context));
            // serverInfoList.numItems = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList.Count;
            // //默认选择第一个
            // serverInfoList.selectedIndex = 0;
        }

        public static void OnShow(this UILobby self, Entity contextData = null)
        {
        }

        public static void OnHide(this UILobby self)
        {
            self.ServerZone = -1;
        }

        public static void BeforeUnload(this UILobby self)
        {
        }

        public static async ETTask EnterMap(this UILobby self)
        {
            Scene root = self.Root();
            root.GetComponent<FUIComponent>().ClosePanel(PanelId.UILobby);
            await LoadingPanelHelper.OpenSetLoading(root, 10);
            await EnterMapHelper.EnterMapAsync(root);
        }

        public static void OnItemRender(UILobby self, int index, GObject item)
        {
            var serverInfosList = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList;
            var itemData = serverInfosList[index];
            var uiSeverInfoItem = item as FUI_UISeverInfoItem;
            uiSeverInfoItem.ServerName.text = itemData.Name;
            uiSeverInfoItem.States.selectedIndex = itemData.Status;
        }

        private static void OnClickItem(UILobby self, EventContext context)
        {
            var uiSeverInfoItem = context.data as FUI_UISeverInfoItem;
            int idx = self.FUIUILobby.ServerInfoList.GetChildIndex(context.data as GObject);
            var serverInfosList = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList;
            var itemData = serverInfosList[idx];
            self.ServerZone = itemData.ServerZone;
            uiSeverInfoItem.SelectStates.selectedIndex = 1;
        }
    }
}