using ET.EventType;

namespace ET.Server
{
    [Event(SceneType.Map)]
    public class BuffTimeOut_RemoveBuff : AEvent<Scene,BuffTimeOut>
    {
        protected override async ETTask Run(Scene scene, BuffTimeOut a)
        {
            a.Unit?.GetComponent<BuffComponent>()?.Remove(a.BuffId);
            await ETTask.CompletedTask;
        }
    }
}