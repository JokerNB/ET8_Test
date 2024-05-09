using ET.Client.HeadBarPanel;
using FairyGUI;
using Unity.Mathematics;
using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof (Unit))]
    public class HeadBarComponent: Entity, IAwake, IUpdate , IDestroy
    {
        public UIPanel _UIPanel;
        public Camera MainCamera;
    }
}