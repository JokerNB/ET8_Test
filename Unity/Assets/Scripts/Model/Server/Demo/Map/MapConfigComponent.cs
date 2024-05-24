namespace ET.Server
{
    [ComponentOf(typeof(Scene))]
    public class MapConfigComponent : Entity, IAwake
    {
        public int StartMapConfigId = 0;
        public int CurMapConfigId = 0;

        public MapConfig StartMapConfig
        {
            get
            {
                if (this.StartMapConfigId > 0)
                    return MapConfigCategory.Instance.Get(this.StartMapConfigId);
                return null;
            }
        }

        public MapConfig CurMapConfig
        {
            get
            {
                if (this.CurMapConfigId > 0)
                    return MapConfigCategory.Instance.Get(this.CurMapConfigId);
                return null;
            }
        }

        public StartSceneConfig StartSceneConfig_Start
        {
            get
            {
                if (this.StartMapConfig == null)
                    return null;
                return StartSceneConfigCategory.Instance.Get(this.StartMapConfig.StartSceneConfigId);
            }
        }

        public StartSceneConfig StartSceneConfig_Cur
        {
            get
            {
                if (this.CurMapConfig == null)
                    return null;
                return StartSceneConfigCategory.Instance.Get(this.CurMapConfig.StartSceneConfigId);
            }
        }
    }
}