namespace ET.Assets.Scripts.Hotfix.Client.UI;

[EntitySystemOf(typeof(FairyGUIComponent))]
public static class FairyGUIComponentSystem
{
    [EntitySystem]
    private static void Awake(this ET.FairyGUIComponent self)
    {
        Log.Error("FairyGUIComponent Awake");
    }
}