using System.Collections.Generic;

namespace ET.Client;

[ComponentOf]
public class FUIComponent: Entity, IAwake, IDestroy
{
    public List<PanelId> VisiblePanelsQueue = new List<PanelId>(10);

    public Dictionary<int, FUIEntity> AllPanelsDic = new Dictionary<int, FUIEntity>(10);

    public List<PanelId> FUIEntitylistCached = new List<PanelId>(10);

    public Dictionary<int, FUIEntity> VisiblePanelsDic = new Dictionary<int, FUIEntity>(10);

    public Stack<PanelId> HidePanelsStack = new Stack<PanelId>(10);
}