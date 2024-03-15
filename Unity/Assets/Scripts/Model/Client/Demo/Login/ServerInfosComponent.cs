using System.Collections.Generic;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class ServerInfosComponent: Entity, IAwake
    {
        public List<EntityRef<ServerInfo>> ServerInfosList = new List<EntityRef<ServerInfo>>();
    }
}