using ET.Client.Lobby;
using FairyGUI;

namespace ET.Client
{
    [FriendOf(typeof(UILobby))]
    [FriendOfAttribute(typeof(ET.ServerInfo))]
    [FriendOfAttribute(typeof(ET.Client.ServerInfoComponent))]
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
            serverInfoList.numItems = self.Root().GetComponent<ServerInfoComponent>().ServerInfos.Count;
            //默认选择第一个
            SelectItem(self, serverInfoList.GetChildAt(0) as FUI_UISeverInfoItem);
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
            var account = self.Root().GetComponent<PlayerComponent>().Account;
            var token = self.Root().GetComponent<PlayerComponent>().Token;
            var r2CGetRealmKey = await LoginHelper.GetRealmKey(self.Root(), token, account, (int)serverInfo.Id);
            if (r2CGetRealmKey.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"获取RealmKey失败 {r2CGetRealmKey.Error}");
                return;
            }

            var response = await self.Root().GetComponent<ClientSenderComponent>().LoginGameAsync(account, r2CGetRealmKey.Key, r2CGetRealmKey.Address);
            if (response.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"登录游戏失败 :{response.Error}");
                return;
            }

            //请求角色列表
            C2G_GetRolesList c2RGetRolesList = C2G_GetRolesList.Create();
            c2RGetRolesList.Account = account;
            G2C_GetRolesList r2CGetRolesList = await self.Root().GetComponent<ClientSenderComponent>().Call(c2RGetRolesList) as G2C_GetRolesList;
            if (r2CGetRolesList.Error != ErrorCode.ERR_Success)
            {
                Log.Error("请求角色列表失败！");
                return;
            }
            Log.Debug("请求角色列表成功！");
            self.Root().GetComponent<RolesInfoComponent>().Add(r2CGetRolesList.RolesInfosList);

            self.Root().GetComponent<PlayerComponent>().MyId = response.PlayerId;
            self.Root().GetComponent<PlayerComponent>().NickName = response.NickName;

            await EventSystem.Instance.PublishAsync(self.Root(), new LoginGameFinish());
        }

        public static void OnItemRender(this UILobby self, int index, GObject item)
        {
            var serverInfosList = self.Root().GetComponent<ServerInfoComponent>().ServerInfos;
            ServerInfo itemData = serverInfosList[index];
            var uiSeverInfoItem = item as FUI_UISeverInfoItem;
            uiSeverInfoItem.ServerName.text = itemData.ServerName;
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
            if (idx == self._curSelectIdx)
                return;
            //清理之前的选中状态
            if (self._curSelectIdx != -1)
            {
                var oldSelectItem = self.FUIUILobby.ServerInfoList.GetChildAt(self._curSelectIdx) as FUI_UISeverInfoItem;
                oldSelectItem.SelectStates.selectedIndex = 0;
            }
            //处理当前选中的Item
            var serverInfosList = self.Root().GetComponent<ServerInfoComponent>().ServerInfos;
            ServerInfo itemData = serverInfosList[idx];
            self._ServerInfo = itemData;
            uiSeverInfoItem.SelectStates.selectedIndex = 1;
            self._curSelectIdx = idx;
        }
    }
}