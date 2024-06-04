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
            foreach (var roleInfoRef in self.RolesInfos.Values)
            {
                RoleInfo roleInfo = roleInfoRef;
                roleInfo?.Dispose();
            }

            self.RolesInfos.Clear();
        }

        public static void Add(this RolesInfoManagerComponent self,List<RoleInfo> roleInfosData)
        {
            foreach (RoleInfo roleInfo in roleInfosData)
            {
                if(self.RolesInfos.ContainsKey(roleInfo.UnitConfigId))
                    continue;
                self.RolesInfos.Add(roleInfo.UnitConfigId,roleInfo);
                self.AddChild(roleInfo);
            }
            //先从配置列表里随机4个可以使用 仅限Player
            var dataList = UnitConfigCategory.Instance.DataList;
            List<int> ids = self.GetRandomIdsByCount(4, dataList.Count);
            foreach (int id in ids)
            {
                UnitConfig unitConfig = UnitConfigCategory.Instance.Get(id);
                if(self.RolesInfos.ContainsKey(unitConfig.Id))
                    continue;
                RoleInfo roleInfo = self.AddChildWithId<RoleInfo>(id);
                roleInfo.UnitConfigId = id;
                roleInfo.Level = 0;
                roleInfo.Proficiency = 0;
                roleInfo.IsAlreadyOwned = 0;
                roleInfo.IsTemporaryUnlock = 1;
                self.RolesInfos.Add(id,roleInfo);
            }
        }

        public static List<int> GetRandomIdsByCount(this RolesInfoManagerComponent self, int randomCount, int dataCount)
        {
            List<int> ids = new List<int>();

            //需要保证数据里最少有randomCount个符合条件的Unit
            var id = RandomGenerator.RandomNumber(1, dataCount);
            for (int i = 0; i < randomCount; i++)
            {
                while (!(!ids.Contains(id) && self.RandomCanUse(id)))
                {
                    id = RandomGenerator.RandomNumber(1, dataCount);
                }

                ids.Add(id);
            }

            return ids;
        }

        public static RoleInfo Get(this RolesInfoManagerComponent self, int id)
        {
            if (self.RolesInfos.ContainsKey(id))
            {
                RoleInfo roleInfo = self.RolesInfos[id];
                return roleInfo;
            }

            return null;
        }

        public static bool RandomCanUse(this RolesInfoManagerComponent self, int id)
        {
            UnitConfig unitConfig = UnitConfigCategory.Instance.Get(id);
            HeroConfig heroConfig = HeroConfigCategory.Instance.Get(unitConfig.PropertyConfigId);
            bool isPlayer = unitConfig.UnitType == UnitType.Player;
            bool isUnlock = heroConfig.UnlockType == UnlockType.Proficiency;
            return isPlayer && isUnlock;
        }
    }
}