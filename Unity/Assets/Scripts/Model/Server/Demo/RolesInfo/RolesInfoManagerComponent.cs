using System.Collections.Generic;

namespace ET.Server
{
    [ComponentOf(typeof(Scene))]
    public class RolesInfoManagerComponent : Entity, IAwake , IDestroy
    {
        public Dictionary<int, EntityRef<RoleInfo>> RolesInfos = new Dictionary<int, EntityRef<RoleInfo>>();
    }
}