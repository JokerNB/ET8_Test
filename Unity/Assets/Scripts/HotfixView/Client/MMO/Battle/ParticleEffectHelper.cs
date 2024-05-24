using UnityEngine;

namespace ET.Client
{
    public static class ParticleEffectHelper
    {
        public static async ETTask<Unit> CreateParticle(Unit target, int configId)
        {
            ParticleConfig config = ParticleConfigCategory.Instance.Get(configId);
            string path = $"Assets/Bundles/Effects/{config.ResourcePath}";
            GameObject bundleGameObject = await target.Root().GetComponent<ResourcesLoaderComponent>().LoadAssetAsync<GameObject>(path);
            GameObject particleGo = GameObject.Instantiate(bundleGameObject);
            if (config.IsFollowUnit != 0)
                particleGo.transform.SetParent(target.GetComponent<GameObjectComponent>().GameObject.transform, false);
            else
                particleGo.transform.SetParent(target.Root().GetComponent<GlobalComponent>().Unit, false);
            Unit particleUnit = UnitFactory.CreateParticleUnit(target.Root().CurrentScene());
            particleUnit.AddComponent<GameObjectComponent>().GameObject = particleGo;
            particleGo.transform.localPosition = new Vector3(config.PosX, config.PosY, config.PosZ);
            particleGo.transform.localScale = new Vector3(config.ScaleX, config.ScaleY, config.ScaleZ);
            OutDurationTime(particleUnit, config.TotalTime).Coroutine();
            return particleUnit;
        }

        public static async ETTask OutDurationTime(Unit unit, float time)
        {
            if (time <= 0)
                return;
            long instanceId = unit.InstanceId;
            await unit.Root().GetComponent<TimerComponent>().WaitAsync((long)time);
            if (unit.InstanceId != instanceId)
                return;
            unit.Root().CurrentScene().GetComponent<UnitComponent>().Remove(unit.Id);
        }
    }
}