using ET.EventType;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class CastBreak_PlayView : AEvent<Scene,CastBreak>
    {
        protected override async ETTask Run(Scene scene, CastBreak a)
        {
            Unit caster = scene.GetComponent<UnitComponent>().Get(a.CasterId);
            if (caster == null)
                return;

            ClientCast cast = caster.GetComponent<ClientCastComponent>().Get(a.CastId);
            if(cast == null)
                return;
            caster.GetComponent<AnimatorComponent>().Play(MotionType.Idle);
            await ETTask.CompletedTask;
        }
    }
}