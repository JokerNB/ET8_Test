using System.Collections.Generic;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class RolesInfoComponent : Entity, IAwake, IDestroy
    {
        public List<EntityRef<RoleInfo>> RolesInfo = new List<EntityRef<RoleInfo>>();
        public List<EntityRef<RoleInfo>> ShowRolesInfo = new List<EntityRef<RoleInfo>>();
    }
}