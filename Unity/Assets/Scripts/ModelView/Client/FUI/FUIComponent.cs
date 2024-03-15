using System.Collections.Generic;

namespace ET.Client
{
    [ComponentOf]
    public class FUIComponent: Entity, IAwake, IDestroy
    {
        public List<PanelId> VisiblePanelsQueue = new List<PanelId>(10);

        public Dictionary<int, EntityRef<FUIEntity>> AllPanelsDic = new Dictionary<int, EntityRef<FUIEntity>>(10);

        public List<PanelId> FUIEntitylistCached = new List<PanelId>(10);

        public Dictionary<int, EntityRef<FUIEntity>> VisiblePanelsDic = new Dictionary<int, EntityRef<FUIEntity>>(10);

        public Stack<PanelId> HidePanelsStack = new Stack<PanelId>(10);
    }
}