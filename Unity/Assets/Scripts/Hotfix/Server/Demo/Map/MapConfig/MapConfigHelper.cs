namespace ET.Server
{
    public static class MapConfigHelper
    {
        public static StartSceneConfig GetStartSceneConfigByFirst()
        {
            var dataList = MapConfigCategory.Instance.DataList;
            StartSceneConfig startSceneConfig = StartSceneConfigCategory.Instance.Get(dataList[0].StartSceneConfigId);
            return startSceneConfig;
        }

        public static MapConfig GetMapConfigByFirst()
        {
            return MapConfigCategory.Instance.DataList[0];
        }
    }
}