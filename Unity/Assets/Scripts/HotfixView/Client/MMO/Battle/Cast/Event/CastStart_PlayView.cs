using ET.EventType;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class CastStart_PlayView : AEvent<Scene, CastStart>
    {
        protected override async ETTask Run(Scene scene, CastStart a)
        {
            Unit unit = scene.GetComponent<UnitComponent>().Get(a.CasterId);
            if (unit == null)
                return;
            CastConfig castConfig = CastConfigCategory.Instance.Get((int)a.CastConfigId);
            unit.GetComponent<AnimatorComponent>()?.Play((MotionType)castConfig.StartAnimation);
            foreach (int effectId in castConfig.StartEffect)
            {
                ParticleEffectHelper.CreateParticle(unit, effectId).Coroutine();
            }

            await ETTask.CompletedTask;
        }
    }
}