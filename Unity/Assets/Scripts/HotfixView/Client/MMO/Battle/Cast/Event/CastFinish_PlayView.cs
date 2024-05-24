using ET.EventType;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class CastFinish_PlayView : AEvent<Scene,CastFinish>
    {
        protected override async ETTask Run(Scene scene, CastFinish a)
        {

            await ETTask.CompletedTask;
        }
    }
}