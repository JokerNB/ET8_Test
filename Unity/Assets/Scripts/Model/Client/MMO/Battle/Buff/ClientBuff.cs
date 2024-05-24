namespace ET.Client
{
    [ChildOf(typeof(ClientBuffComponent))]
    public class ClientBuff : Entity, IAwake<int>, IDestroy
    {
        public int ConfigId;
        public BuffConfig BuffConfig => BuffConfigCategory.Instance.Get(this.ConfigId);

        public EntityRef<Unit> Owner;
        public long CreateTime;
        public long ExpireTime;
    }
}