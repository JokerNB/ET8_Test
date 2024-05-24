using ET.EventType;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class BuffRemove_removeBuffView : AEvent<Scene, BuffRemove>
    {
        protected override async ETTask Run(Scene scene, BuffRemove a)
        {
            await ETTask.CompletedTask;
        }
    }
}