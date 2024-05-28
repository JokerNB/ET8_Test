using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Current)]
    public class AfterUnitCreate_CreateUnitView : AEvent<Scene, AfterUnitCreate>
    {
        protected override async ETTask Run(Scene scene, AfterUnitCreate args)
        {
            Unit unit = args.Unit;
            // Unit View层
            string assetsName = $"Assets/Bundles/Unit/Unit.prefab";
            GameObject bundleGameObject = await scene.GetComponent<ResourcesLoaderComponent>().LoadAssetAsync<GameObject>(assetsName);
            GameObject prefab = bundleGameObject.Get<GameObject>("Skeleton");

            GlobalComponent globalComponent = scene.Root().GetComponent<GlobalComponent>();

            GameObject unitGameoObject = GameObject.Instantiate(bundleGameObject, globalComponent.Unit, true);

            GameObject go = UnityEngine.Object.Instantiate(prefab, unitGameoObject.transform, true);
            unitGameoObject.transform.position = unit.Position;
            unit.AddComponent<GameObjectComponent>().GameObject = unitGameoObject;
            unit.AddComponent<AnimatorComponent>();
            // await scene.Root().GetComponent<TimerComponent>().WaitAsync(1000);
            unit.AddComponent<HeadBarComponent>();
            await ETTask.CompletedTask;
        }
    }
}