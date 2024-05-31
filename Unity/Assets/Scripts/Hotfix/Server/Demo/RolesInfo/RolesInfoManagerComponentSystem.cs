using System;
using System.Collections.Generic;

namespace ET.Server
{
    [EntitySystemOf(typeof(RolesInfoManagerComponent))]
    [FriendOfAttribute(typeof(ET.Server.RolesInfoManagerComponent))]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    public static partial class RolesInfoManagerComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.RolesInfoManagerComponent self)
        {
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.RolesInfoManagerComponent self)
        {
            foreach (var roleInfoRef in self.RolesInfo_Sql.Values)
            {
                RoleInfo roleInfo = roleInfoRef;
                roleInfo?.Dispose();
            }

            self.RolesInfo_Sql.Clear();
        }

        public static void UpdateData(this RolesInfoManagerComponent self, RoleInfo roleInfo)
        {
            if (self.RolesInfo_Sql.ContainsKey(roleInfo.UnitConfigId))
                return;
            self.RolesInfo_Sql.Add(roleInfo.UnitConfigId, roleInfo);
        }

        public static void UpdateData(this RolesInfoManagerComponent self, List<RoleInfo> roleInfos)
        {
            if (roleInfos == null || roleInfos.Count == 0)
                return;
            foreach (RoleInfo roleInfo in roleInfos)
            {
                self.UpdateData(roleInfo);
            }
        }

        public static List<RoleInfo> GetCanUseRoles(this RolesInfoManagerComponent self)
        {
            List<RoleInfo> roleInfos = new List<RoleInfo>();
            //先从配置列表里随机4个可以使用
            //免费 ->
            var dataList = UnitConfigCategory.Instance.DataList;
            List<int> ids = self.GetRandomIdsByCount(4, dataList.Count);
            foreach (int id in ids)
            {
                UnitConfig unitConfig = UnitConfigCategory.Instance.Get(id);
                if(self.RolesInfo_Sql.ContainsKey(unitConfig.Id))
                    continue;
                RoleInfo roleInfo = new RoleInfo();
                roleInfo.UnitConfigId = id;
                roleInfo.Level = 0;
                roleInfo.Proficiency = 0;
                roleInfo.IsAlreadyOwned = 0;
                roleInfos.Add(roleInfo);
            }

            foreach (RoleInfo roleInfo in self.RolesInfo_Sql.Values)
            {
                HeroConfig heroConfig = HeroConfigCategory.Instance.Get(UnitConfigCategory.Instance.Get(roleInfo.UnitConfigId).PropertyConfigId);
                switch (heroConfig.UnlockType)
                {
                    case UnlockType.Proficiency:
                        if (roleInfo.Level >= 3)
                            roleInfos.Add(roleInfo);
                        break;
                    case UnlockType.Pay:
                    case UnlockType.Activity:
                    case UnlockType.ExchangeFragments:
                        if (roleInfo.IsAlreadyOwned == 1)
                            roleInfos.Add(roleInfo);
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            return roleInfos;
        }

        public static List<int> GetRandomIdsByCount(this RolesInfoManagerComponent self, int randomCount, int dataCount)
        {
            List<int> ids = new List<int>();

            var id = RandomGenerator.RandomNumber(1, dataCount);
            for (int i = 0; i < randomCount; i++)
            {
                while (ids.Contains(id))
                {
                    id = RandomGenerator.RandomNumber(1, dataCount);
                }

                ids.Add(id);
            }

            return ids;
        }
    }
}