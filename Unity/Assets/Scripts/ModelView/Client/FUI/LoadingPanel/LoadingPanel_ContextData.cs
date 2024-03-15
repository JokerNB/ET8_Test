namespace ET.Client
{
    [ChildOf(typeof (FUIComponent))]
    public class LoadingPanel_ContextData: Entity, IAwake<uint>
    {
        public uint totalTime = 5;
    }
}