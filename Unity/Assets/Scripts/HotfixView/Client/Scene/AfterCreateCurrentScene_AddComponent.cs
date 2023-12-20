namespace ET.Client
{
    [Event(SceneType.Current)]
    public class AfterCreateCurrentScene_AddComponent: AEvent<Scene, AfterCreateCurrentScene>
    {
        protected override async ETTask Run(Scene scene, AfterCreateCurrentScene args)
        {
            // scene.AddComponent<FUIComponent>();
            scene.AddComponent<ResourcesLoaderComponent>();
            await ETTask.CompletedTask;
        }
    }
}