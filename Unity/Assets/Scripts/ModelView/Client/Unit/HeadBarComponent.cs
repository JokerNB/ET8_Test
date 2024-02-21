using System.Numerics;
using ET.Client.HUDPanel;
using FairyGUI;

namespace ET.Client;

[ComponentOf(typeof (Unit))]
public class HeadBarComponent: Entity, IAwake, IUpdate
{
    public FUI_UIHearBarPanel FuiUIHearBarPanel;
}