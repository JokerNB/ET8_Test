namespace ET
{
    [ChildOf(typeof(ServerInfosComponent))]
    public class ServerInfo : Entity,IAwake
    {
        public int ServerZone;
        public string Name;
        public int Status;
    }
}