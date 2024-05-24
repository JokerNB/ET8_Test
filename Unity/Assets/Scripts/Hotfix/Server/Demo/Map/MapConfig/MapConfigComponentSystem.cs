namespace ET.Server
{
    [EntitySystemOf(typeof(MapConfigComponent))]
    [FriendOfAttribute(typeof(ET.Server.MapConfigComponent))]
    public static partial class MapConfigComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.MapConfigComponent self)
        {
            var dataList = MapConfigCategory.Instance.DataList;
            if (dataList == null || dataList.Count == 0)
                return;
            //默认选择第一个
            var mapConfig = dataList[0];
            self.StartMapConfigId = mapConfig.Id;
            self.CurMapConfigId = mapConfig.Id;
        }

        public static void ChangeMap(this MapConfigComponent self, int mapConfigId)
        {
            self.CurMapConfigId = mapConfigId;
        }
    }
}