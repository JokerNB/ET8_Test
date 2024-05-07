namespace ET
{
    [ChildOf]
    public class ServerInfo : Entity , IAwake
    {
        public ZoneStatus Status;
        public string ServerName;
    }
}