using FairyGUI;

namespace ET.Client;

[FriendOf(typeof(GlobalComponent))]
public static class FUIRootHelper
{
    public static void Init()
    {
          
    }
        
    public static GComponent GetTargetRoot(UIPanelType type,Scene scene)
    {
        var globalComponent = scene.GetComponent<GlobalComponent>();
        if (type == UIPanelType.Normal)
            return globalComponent.NormalGRoot;
        else if (type == UIPanelType.Fixed)
            return globalComponent.FixedGRoot;
        else if (type == UIPanelType.PopUp)
            return globalComponent.PopUpGRoot;
        else if (type == UIPanelType.Other)
            return globalComponent.OtherGRoot;
        else if (type == UIPanelType.HeadBar)
            return globalComponent.HeadBarRoot;
        else if (type == UIPanelType.Hurt)
            return globalComponent.HurtRoot;

        Log.Error("uiroot type is error: " + type.ToString());
        return null;
    }
}