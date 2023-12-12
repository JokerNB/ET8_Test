using UnityEngine;
using UnityEngine.UI;

namespace ET.Client;

[EntitySystemOf(typeof (MainUIComponent))]
[FriendOf(typeof (MainUIComponent))]
public static partial class MainUIComponentSystem
{
    [EntitySystem]
    private static void Awake(this ET.Client.MainUIComponent self)
    {
        ReferenceCollector rc = self.GetParent<UI>().GameObject.GetComponent<ReferenceCollector>();

        self.Button_Back = rc.Get<Button>("Button_Back");
        self.Button_Back.onClick.AddListener(OnButton_BackClick);
    }

    private static void OnButton_BackClick()
    {
        Debug.LogError("OnClickButton_Back");
    }
}