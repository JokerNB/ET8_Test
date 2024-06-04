﻿namespace ET.Client
{
    public static partial class SceneChangeHelper
    {
        // 场景切换协程
        public static async ETTask SceneChangeTo(Scene root, string sceneName, long sceneInstanceId)
        {
            root.RemoveComponent<AIComponent>();

            CurrentScenesComponent currentScenesComponent = root.GetComponent<CurrentScenesComponent>();
            currentScenesComponent.Scene?.Dispose(); // 删除之前的CurrentScene，创建新的
            Scene currentScene = CurrentSceneFactory.Create(sceneInstanceId, sceneName, currentScenesComponent);

            // 可以订阅这个事件中创建Loading界面
            EventSystem.Instance.Publish(root, new SceneChangeStart(){sceneName = sceneName});
            root.RemoveComponent<AIComponent>();
            EventSystem.Instance.Publish(currentScene, new SceneChangeFinish());
            // 通知等待场景切换的协程
            root.GetComponent<ObjectWait>().Notify(new Wait_SceneChangeFinish());
            await ETTask.CompletedTask;
        }
    }
}