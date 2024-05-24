namespace ET.Server
{

    [EntitySystemOf(typeof(ActionsTempComponent))]
    public static partial class ActionTempComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.ActionsTempComponent self)
        {

        }
        [EntitySystem]
        private static void Destroy(this ET.Server.ActionsTempComponent self)
        {

        }
    }
}