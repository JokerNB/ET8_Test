using System;
using System.Collections.Generic;
using System.Security.Cryptography;

namespace ET.Client
{
    [EntitySystemOf(typeof(RolesInfoComponent))]
    [FriendOfAttribute(typeof(ET.Client.RolesInfoComponent))]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    public static partial class RolesInfoComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.RolesInfoComponent self)
        {

        }
        [EntitySystem]
        private static void Destroy(this ET.Client.RolesInfoComponent self)
        {
            foreach (RoleInfo roleInfo in self.ShowRolesInfo)
            {
                roleInfo?.Dispose();
            }
            self.RolesInfo.Clear();
            self.ShowRolesInfo.Clear();
        }

        public static void Add(this RolesInfoComponent self, RolesInfoProto rolesInfoProto)
        {
            var roleInfo = self.AddChildWithId<RoleInfo>(rolesInfoProto.UnitConfigId);
            roleInfo.UnitConfigId = rolesInfoProto.UnitConfigId;
            roleInfo.Proficiency = rolesInfoProto.Proficiency;
            roleInfo.Level = rolesInfoProto.Level;
            self.RolesInfo.Add(roleInfo);
        }

        public static void Add(this RolesInfoComponent self, List<RolesInfoProto> roleInfoProtos)
        {
            foreach (RolesInfoProto rolesInfoProto in roleInfoProtos)
            {
                self.Add(rolesInfoProto);
            }

            self.GetRoleInfosList();
        }

        public static List<RoleInfo> GetRoleInfosList(this RolesInfoComponent self)
        {
            List<RoleInfo> list = new List<RoleInfo>();
            List<int> UnitConfigIds = new List<int>();
            foreach (RoleInfo roleInfo in self.RolesInfo)
            {
                list.Add(roleInfo);
                UnitConfigIds.Add(roleInfo.UnitConfigId);
                self.ShowRolesInfo.Add(roleInfo);
            }

            foreach (UnitConfig unitConfig in UnitConfigCategory.Instance.DataList)
            {
                if(UnitConfigIds.Contains(unitConfig.Id))
                    continue;
                RoleInfo roleInfo = self.AddChildWithId<RoleInfo>(unitConfig.Id);
                roleInfo.UnitConfigId = unitConfig.Id;
                roleInfo.Level = 0;
                roleInfo.Proficiency = 0;
                roleInfo.IsUnlock = 0;
                roleInfo.IsAlreadyOwned = 0;
                list.Add(roleInfo);
                self.ShowRolesInfo.Add(roleInfo);
            }

            return list;
        }
    }
}