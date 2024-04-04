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
            self._ServerInfo = null;
            self._curSelectIdx = -1;
        }

        public static void RegisterUIEvent(this UILobby self)
        {
            self.FUIUILobby.Button_EntryMap.AddListner(() =>
            {
                self.EnterMap().Coroutine();
            });
            var serverInfoList = self.FUIUILobby.ServerInfoList;
            serverInfoList.itemRenderer = self.OnItemRender;
            serverInfoList.onClickItem.Add(self.OnClickItem);
            serverInfoList.numItems = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList.Count;
            //默认选择第一个
            SelectItem(self,serverInfoList.GetChildAt(0) as FUI_UISeverInfoItem);
        }

        public static void OnShow(this UILobby self, Entity contextData = null)
        {
        }

        public static void OnHide(this UILobby self)
        {
            self._ServerInfo = null;
            self._curSelectIdx = -1;
        }

        public static void BeforeUnload(this UILobby self)
        {
        }

        public static async ETTask EnterMap(this UILobby self)
        {
            var serverInfo = (ServerInfo)self._ServerInfo;
            if (serverInfo == null || serverInfo.Status == ZoneStatus.Closed)
            {
                Log.Error("ServerInfo Error");
                return;
            }
            //TODO:登录Gate
            var account = self.Root().GetComponent<PlayerComponent>().Account;
            var password = self.Root().GetComponent<PlayerComponent>().Password;
            var token = self.Root().GetComponent<PlayerComponent>().Token;
            await LoginHelper.LoginGate(self.Root(), account, password, serverInfo.GateAddress, token);
        }

        public static void OnItemRender(this UILobby self, int index, GObject item)
        {
            var serverInfosList = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList;
            ServerInfo itemData = serverInfosList[index];
            var uiSeverInfoItem = item as FUI_UISeverInfoItem;
            uiSeverInfoItem.ServerName.text = itemData.Name;
            uiSeverInfoItem.States.selectedIndex = (int)itemData.Status;
        }

        private static void OnClickItem(this UILobby self, EventContext context)
        {
            var uiSeverInfoItem = context.data as FUI_UISeverInfoItem;
            self.SelectItem(uiSeverInfoItem);
        }

        private static void SelectItem(this UILobby self, FUI_UISeverInfoItem uiSeverInfoItem)
        {
            int idx = self.FUIUILobby.ServerInfoList.GetChildIndex(uiSeverInfoItem);
            if(idx == self._curSelectIdx)
                return;
            //清理之前的选中状态
            if(self._curSelectIdx != -1)
            {
                var oldSelectItem = self.FUIUILobby.ServerInfoList.GetChildAt(self._curSelectIdx) as FUI_UISeverInfoItem;
                oldSelectItem.SelectStates.selectedIndex = 0;
            }
            //处理当前选中的Item
            var serverInfosList = self.Root().GetComponent<ServerInfosComponent>().ServerInfosList;
            ServerInfo itemData = serverInfosList[idx];
            self._ServerInfo = itemData;
            uiSeverInfoItem.SelectStates.selectedIndex = 1;
            self._curSelectIdx = idx;
            Log.Error($"gate Address : {itemData.GateAddress}");
        }
    }
}