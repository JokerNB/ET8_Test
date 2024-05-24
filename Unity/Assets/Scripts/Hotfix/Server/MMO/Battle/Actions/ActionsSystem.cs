namespace ET.Server
{
    [EntitySystemOf(typeof(Actions))]
    [FriendOfAttribute(typeof(ET.Server.Actions))]
    public static partial class ActionsSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.Actions self, int args2)
        {
            self.ConfigId = args2;
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.Actions self)
        {
            self.ConfigId = default;
            self.Caster = default;
            self.Owner = default;
        }
    }
}