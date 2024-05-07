namespace ET.Server
{
    [EntitySystemOf(typeof(Player))]
    [FriendOf(typeof(Player))]
    public static partial class PlayerSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.Player self, string args2, string args3)
        {
            self.Account = args2;
            self.Token = args3;
        }
    }
}