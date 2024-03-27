namespace ET
{
    [ChildOf(typeof(ServerInfosComponent))]
    public class ServerInfo : Entity,IAwake
    {
        public string GateAddress;
        public string Name;
        public ZoneStatus Status;
    }
}