namespace ET
{
    [ComponentOf(typeof(Scene))]
    public class MainMapTransferPointComponent : Entity,IAwake
    {
        public BoxColliderTrigger TransferPont_ChooseDifficulty;
    }
}