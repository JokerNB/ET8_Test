using ET.Client.HeadBarPanel;
using Unity.Mathematics;

namespace ET.Client
{
    [ComponentOf(typeof (Unit))]
    public class HeadBarComponent: Entity, IAwake, IUpdate , IDestroy
    {
        public FUI_UIHeadBarPanel FuiUIHearBarPanel;
        public float3 pos;
    }
}