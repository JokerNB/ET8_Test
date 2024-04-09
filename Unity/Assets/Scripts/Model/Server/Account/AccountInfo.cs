namespace ET.Server
{
    [ChildOf(typeof(Session))]
    public class AccountInfo : Entity,IAwake
    {
        public string Account;
        public string Password;
        public int accountType;
        public long CreateTime;
    }

    public enum AccountType
    {
        Player,
        BlackList,
        WhiteList,
        GM
    }
}