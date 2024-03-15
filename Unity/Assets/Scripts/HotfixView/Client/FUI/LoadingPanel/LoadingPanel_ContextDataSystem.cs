namespace ET.Client
{
    [EntitySystemOf(typeof(LoadingPanel_ContextData))]
    [FriendOf(typeof(LoadingPanel_ContextData))]
    public static partial class LoadingPanel_ContextDataSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.LoadingPanel_ContextData self, uint args2)
        {
            self.totalTime = args2;
        }
    }
}