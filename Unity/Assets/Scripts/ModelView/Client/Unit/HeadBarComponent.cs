using ET.Client.HeadBarPanel;

namespace ET.Client
{
    [ComponentOf(typeof (Unit))]
    public class HeadBarComponent: Entity, IAwake, IUpdate , IDestroy
    {
        public FUI_UIHeadBarPanel FuiUIHearBarPanel;
    }
}