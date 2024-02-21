using FairyGUI;
using UnityEngine;

namespace ET
{
    [FriendOf(typeof(GlobalComponent))]
    public static partial class GlobalComponentSystem
    {
        [EntitySystem]
        public static void Awake(this GlobalComponent self)
        {
            self.Global = GameObject.Find("/Global").transform;
            self.Unit = GameObject.Find("/Global/Unit").transform;
            self.GlobalConfig = Resources.Load<GlobalConfig>("GlobalConfig");
            
            self.HurtRoot = new GComponent();
            self.HurtRoot.gameObjectName = "HurtGRoot";
            FairyGUI.GRoot.inst.AddChild(self.HurtRoot);
            
            self.HeadBarRoot = new GComponent();
            self.HeadBarRoot.gameObjectName = "HeadBarRoot";
            FairyGUI.GRoot.inst.AddChild(self.HeadBarRoot);
            
            self.NormalGRoot = new GComponent();
            self.NormalGRoot.gameObjectName = "NormalGRoot";
            FairyGUI.GRoot.inst.AddChild(self.NormalGRoot);
            
            self.PopUpGRoot = new GComponent();
            self.PopUpGRoot.gameObjectName = "PopUpGRoot";
            FairyGUI.GRoot.inst.AddChild(self.PopUpGRoot);
            
            self.FixedGRoot = new GComponent();
            self.FixedGRoot.gameObjectName = "FixedGRoot";
            FairyGUI.GRoot.inst.AddChild(self.FixedGRoot);
            
            self.OtherGRoot = new GComponent();
            self.OtherGRoot.gameObjectName = "OtherGRoot";
            FairyGUI.GRoot.inst.AddChild(self.OtherGRoot);
        }
    }
    
    [ComponentOf(typeof(Scene))]
    public class GlobalComponent: Entity, IAwake
    {
        public Transform Global;
        public Transform Unit { get; set; }
        public GComponent GRoot{ get; set; }
        public GComponent HeadBarRoot { get; set; }
        public GComponent HurtRoot { get; set; }
        public GComponent NormalGRoot{ get; set; }
        public GComponent PopUpGRoot{ get; set; }
        public GComponent FixedGRoot{ get; set; }
        public GComponent OtherGRoot{ get; set; }

        public GlobalConfig GlobalConfig { get; set; }
    }
}