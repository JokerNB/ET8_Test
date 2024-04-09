namespace ET.Server
{
    [ChildOf(typeof(Session))]
    public class AccountPlayerInfo : Entity , IAwake
    {
        public string Account;
        public string NickName;
    }
}