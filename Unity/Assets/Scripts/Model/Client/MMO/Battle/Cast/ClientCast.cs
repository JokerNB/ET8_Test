using System.Collections.Generic;

namespace ET.Client
{
    [ChildOf(typeof(ClientCastComponent))]
    public class ClientCast : Entity,IAwake<int>,IDestroy
    {
        public int ConfigId;

        public CastConfig CastConfig => CastConfigCategory.Instance.Get(this.ConfigId);

        public long CasterId;
        public List<long> TargetId = new List<long>();
    }
}