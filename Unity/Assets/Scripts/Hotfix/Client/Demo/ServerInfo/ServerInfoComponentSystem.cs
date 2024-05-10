using System.Collections.Generic;

namespace ET.Client
{
    [EntitySystemOf(typeof(ServerInfoComponent))]
    [FriendOfAttribute(typeof(ET.Client.ServerInfoComponent))]
    [FriendOfAttribute(typeof(ET.ServerInfo))]
    public static partial class ServerInfoComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.ServerInfoComponent self)
        {

        }
        [EntitySystem]
        private static void Destroy(this ET.Client.ServerInfoComponent self)
        {
            foreach (var serverInfoRef in self.ServerInfos)
            {
                ServerInfo serverInfo = serverInfoRef;
                serverInfo?.Dispose();
            }

            self.ServerInfos.Clear();
        }

        public static void Add(this ServerInfoComponent self, ServerInfoProto serverInfoProto)
        {
            var serverInfo = self.AddChildWithId<ServerInfo>(serverInfoProto.Id);
            serverInfo.ServerName = serverInfoProto.ServerName;
            serverInfo.Status = (ZoneStatus)serverInfoProto.Status;
            self.ServerInfos.Add(serverInfo);
        }

        public static void Add(this ServerInfoComponent self, List<ServerInfoProto> serverInfoProtos)
        {
            foreach (ServerInfoProto serverInfoProto in serverInfoProtos)
            {
                self.Add(serverInfoProto);
            }
        }
    }
}