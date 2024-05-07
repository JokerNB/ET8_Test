namespace ET.Server
{
    [EntitySystemOf(typeof(AccountSessionComponent))]
    [FriendOf(typeof(AccountSessionComponent))]
    public static partial class AccountSessionComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.AccountSessionComponent self)
        {

        }
        [EntitySystem]
        private static void Destroy(this ET.Server.AccountSessionComponent self)
        {
            self.AccountSessionDic.Clear();
        }

        public static Session Get(this AccountSessionComponent self, string accountName)
        {
            if (self.AccountSessionDic.TryGetValue(accountName, out EntityRef<Session> session))
                return null;
            return session;
        }

        public static void Add(this AccountSessionComponent self,string accountName , EntityRef<Session> session)
        {
            if (self.AccountSessionDic.ContainsKey(accountName))
            {
                self.AccountSessionDic[accountName] = session;
                return;
            }

            self.AccountSessionDic.Add(accountName, session);
        }

        public static void Remove(this AccountSessionComponent self, string accountName)
        {
            if (self.AccountSessionDic.ContainsKey(accountName))
                self.AccountSessionDic.Remove(accountName);
        }
    }
}