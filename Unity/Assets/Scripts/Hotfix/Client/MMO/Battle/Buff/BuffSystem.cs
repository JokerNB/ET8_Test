namespace ET.Client
{
    [EntitySystemOf(typeof(ClientBuff))]
    [FriendOfAttribute(typeof(ET.Client.ClientBuff))]
    public static partial class BuffSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.ClientBuff self, int args2)
        {
            self.ConfigId = args2;
        }
        [EntitySystem]
        private static void Destroy(this ET.Client.ClientBuff self)
        {
            self.ConfigId = default;
            self.Owner = default;
            self.CreateTime = default;
            self.ExpireTime = default;

        }
    }
}