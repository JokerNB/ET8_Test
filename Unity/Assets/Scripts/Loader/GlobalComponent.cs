using FairyGUI;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class GlobalComponent: Singleton<GlobalComponent>,ISingletonAwake
    {
        public Transform Global;
        public Transform Unit { get; set; }
        public GComponent GRoot{ get; set; }
        public GComponent NormalGRoot{ get; set; }
        public GComponent PopUpGRoot{ get; set; }
        public GComponent FixedGRoot{ get; set; }
        public GComponent OtherGRoot{ get; set; }

        public GlobalConfig GlobalConfig { get; set; }
        public void Awake()
        {
            Global = GameObject.Find("/Global").transform;
            Unit = GameObject.Find("/Global/Unit").transform;
            GlobalConfig = Resources.Load<GlobalConfig>("GlobalConfig");

            NormalGRoot = new GComponent();
            NormalGRoot.gameObjectName = "NormalGRoot";
            FairyGUI.GRoot.inst.AddChild(NormalGRoot);
            
            PopUpGRoot = new GComponent();
            PopUpGRoot.gameObjectName = "PopUpGRoot";
            FairyGUI.GRoot.inst.AddChild(PopUpGRoot);
            
            FixedGRoot = new GComponent();
            FixedGRoot.gameObjectName = "FixedGRoot";
            FairyGUI.GRoot.inst.AddChild(FixedGRoot);
            
            OtherGRoot = new GComponent();
            OtherGRoot.gameObjectName = "OtherGRoot";
            FairyGUI.GRoot.inst.AddChild(OtherGRoot);
        }
    }
}