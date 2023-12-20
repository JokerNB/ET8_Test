using System;
using System.Collections.Generic;
using System.IO;

namespace ET.Client
{
    [Event(SceneType.Main)]
    public class EntryEvent3_InitClient: AEvent<Scene, EntryEvent3>
    {
        protected override async ETTask Run(Scene root, EntryEvent3 args)
        {
            root.AddComponent<UIGlobalComponent>();
            root.AddComponent<ResourcesLoaderComponent>();
            root.AddComponent<PlayerComponent>();
            root.AddComponent<CurrentScenesComponent>();
            root.AddComponent<ComputersComponent>();
            
            World.Instance.AddSingleton<FUIEventSingleTon>();
            root.AddComponent<LocalizeComponent>();
            root.AddComponent<FUIAssetComponent,bool>(false);
            root.AddComponent<FUIComponent>();
            
            // 根据配置修改掉Main Fiber的SceneType
            string appType = GlobalComponent.Instance.GlobalConfig.AppType.ToString();
            SceneType sceneType = EnumHelper.FromString<SceneType>(appType);
            root.SceneType = sceneType;
            
            await EventSystem.Instance.PublishAsync(root, new AppStartInitFinish());
        }
    }
}