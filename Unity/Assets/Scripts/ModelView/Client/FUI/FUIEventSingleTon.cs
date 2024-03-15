using System;
using System.Collections.Generic;

namespace ET.Client
{
    public struct PanelInfo
    {
        public PanelId PanelId;
    
        public string PackageName;
    
        public string ComponentName;
    }

    [ComponentOf(typeof(Scene))]
    public class FUIEventSingleTon : Singleton<FUIEventSingleTon>, ISingletonAwake
    {
        public readonly Dictionary<PanelId, IFUIEventHandler> UIEventHandlers = new Dictionary<PanelId, IFUIEventHandler>();
        public readonly Dictionary<PanelId, PanelInfo> PanelIdInfoDict = new Dictionary<PanelId, PanelInfo>();
        public readonly Dictionary<string, PanelInfo> PanelTypeInfoDict = new Dictionary<string, PanelInfo>();

        public bool isClicked { get; set; }
        public void Awake()
        {
            UIEventHandlers.Clear();
            PanelIdInfoDict.Clear();
            PanelTypeInfoDict.Clear();

            // foreach (Type v in EventSystem.Instance.GetTypes(typeof(FUIEventAttribute)))
            // {
            //     FUIEventAttribute attr = v.GetCustomAttributes(typeof(FUIEventAttribute), false)[0] as FUIEventAttribute;
            //     self.UIEventHandlers.Add(attr.PanelId, Activator.CreateInstance(v) as IFUIEventHandler);
            //     self.PanelIdInfoDict.Add(attr.PanelId, attr.PanelInfo);
            //     self.PanelTypeInfoDict.Add(attr.PanelId.ToString(), attr.PanelInfo);
            // }
        
            foreach (Type v in CodeTypes.Instance.GetTypes(typeof(FUIEventAttribute)))
            {
                FUIEventAttribute attr = v.GetCustomAttributes(typeof(FUIEventAttribute), false)[0] as FUIEventAttribute;
                UIEventHandlers.Add(attr.PanelId, Activator.CreateInstance(v) as IFUIEventHandler);
                PanelIdInfoDict.Add(attr.PanelId, attr.PanelInfo);
                PanelTypeInfoDict.Add(attr.PanelId.ToString(), attr.PanelInfo);
            }
        }
    
        public IFUIEventHandler GetUIEventHandler( PanelId panelId)
        {
            if (UIEventHandlers.TryGetValue(panelId, out IFUIEventHandler handler))
            {
                return handler;
            }
            Log.Error($"panelId : {panelId} is not have any uiEvent");
            return null;
        }

        public PanelInfo GetPanelInfo( PanelId panelId)
        {
            if (PanelIdInfoDict.TryGetValue(panelId, out PanelInfo panelInfo))
            {
                return panelInfo;
            }
            Log.Error($"panelId : {panelId} is not have any panelInfo");
            return default;
        }
    }
}