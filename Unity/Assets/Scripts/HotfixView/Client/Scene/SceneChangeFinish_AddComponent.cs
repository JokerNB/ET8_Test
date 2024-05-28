namespace ET.Client
{
    [Event(SceneType.Current)]
    public class SceneChangeFinish_AddComponent : AEvent<Scene, SceneChangeFinish>
    {
        protected override async ETTask Run(Scene root, SceneChangeFinish a)
        {
            await root.Root().GetComponent<TimerComponent>().WaitAsync(1000);
            CameraFollowComponent cameraFollowComponent = root.GetComponent<CameraFollowComponent>();
            if (cameraFollowComponent == null)
                cameraFollowComponent = root.AddComponent<CameraFollowComponent>();
            else
                cameraFollowComponent.UpdateByChangeScene();

            await ETTask.CompletedTask;
        }
    }
}