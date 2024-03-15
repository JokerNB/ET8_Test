namespace ET
{
    [EntitySystemOf(typeof(ServerInfosComponent))]
    [FriendOf(typeof(ServerInfosComponent))]
    [FriendOfAttribute(typeof(ET.ServerInfo))]
    public static partial class ServerInfosComponentSystem
    {
        private static void Awake(this ET.ServerInfosComponent self)
        {

        }

        public static void ClearServerInfo(this ServerInfosComponent self)
        {
            foreach (ServerInfo serverInfo in self.ServerInfosList)
            {
                serverInfo?.Dispose();
            }
            self.ServerInfosList.Clear();
        }

        public static void AddServerInfo(this ServerInfosComponent self, ServerListInfo serverListInfo)
        {
            var serverInfo = self.AddChild<ServerInfo>();
            serverInfo.ServerZone = serverListInfo.Zone;
            serverInfo.Name = serverListInfo.Name;
            serverInfo.Status = serverListInfo.Status;
            self.ServerInfosList.Add(serverInfo);
        }
    }
}