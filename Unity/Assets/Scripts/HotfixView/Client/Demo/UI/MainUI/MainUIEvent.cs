using UnityEngine;

namespace ET.Client;

[UIEvent(UIType.MainUI)]
public class MainUIEvent : AUIEvent
{
    public override async ETTask<UI> OnCreate(UIComponent uiComponent, UILayer uiLayer)
    {
        await ETTask.CompletedTask;
        string assetsName = $"Assets/Bundles/UI/MainUI/{UIType.MainUI}.prefab";
        GameObject bundleGameObject = await uiComponent.Scene().GetComponent<ResourcesLoaderComponent>().LoadAssetAsync<GameObject>(assetsName);
        GameObject gameObject = UnityEngine.Object.Instantiate(bundleGameObject, uiComponent.UIGlobalComponent.GetLayer((int)uiLayer));
        UI ui = uiComponent.AddChild<UI, string, GameObject>(UIType.UILobby, gameObject);

        ui.AddComponent<MainUIComponent>();
        return ui;
    }

    public override void OnRemove(UIComponent uiComponent)
    {
    }
}