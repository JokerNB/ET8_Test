namespace ET
{
    [ChildOf(typeof(ServerInfosComponent))]
    public class ServerInfo : Entity,IAwake
    {
        public int ServerZone;
        public string Name;
        public int Status;
    }

    public enum ServerStatus
    {
        Active = 0,
        Close = 1
    }

    public enum ZoneType
    {
        None,
        Game,
        Robot,
        Router
    }
}