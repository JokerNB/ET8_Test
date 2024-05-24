using System;

namespace ET.Server
{
    [EntitySystemOf(typeof(BuffComponent))]
    [FriendOfAttribute(typeof(ET.Server.BuffComponent))]
    [FriendOfAttribute(typeof(ET.Server.Buff))]
    [FriendOfAttribute(typeof(ET.Server.BuffCreateInfo))]
    public static partial class BuffComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.BuffComponent self)
        {
            self.AddComponent<BuffTempComponent>();
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.BuffComponent self)
        {
            self.ConfigIdBuffs.Clear();
        }

        [EntitySystem]
        private static void Deserialize(this ET.Server.BuffComponent self)
        {
            self.AddComponent<BuffTempComponent>();
            foreach (Buff buff in self.Children.Values)
            {
                self.ConfigIdBuffs.Add(buff.configId, buff);
            }
        }

        public static BuffCreateInfo Create(this BuffComponent self, int configId)
        {
            return self.GetComponent<BuffTempComponent>().AddChild<BuffCreateInfo, int>(configId);
        }

        public static bool CreateAndAdd(this BuffComponent self, int configId)
        {
            using (BuffCreateInfo buffCreateInfo = self.Create(configId))
            {
                return self.Add(buffCreateInfo);
            }
        }

        public static bool Add(this BuffComponent self, BuffCreateInfo buffCreateInfo)
        {
            if (buffCreateInfo == null || buffCreateInfo.IsDisposed)
                return false;
            if (self == null || self.IsDisposed)
                return false;
            Buff buff = self.AddChild<Buff, int>(buffCreateInfo.ConfigId);
            buff.Owner = self.GetParent<Unit>();
            Unit owner = buff.Owner;
            if (owner == null)
            {
                buff.Dispose();
                return false;
            }

            int configId = buff.configId;
            if (self.ConfigIdBuffs.ContainsKey(configId))
            {
                //已有相同的buff，框架demo是直接顶掉，根据各自项目的需求设计
                Buff _buff = self.ConfigIdBuffs[configId];
                self.Remove(_buff.Id);
            }

            self.ConfigIdBuffs.Add(configId, buff);
            if (buff.Config.NoticeClientType != NoticeClientType.NoNotice)
            {
                M2C_BuffAdd m2CBuffAdd = M2C_BuffAdd.Create();
                m2CBuffAdd.UnitId = owner.Id;
                m2CBuffAdd.BuffData = buff.ToBuffAddProto();
                MMOMessageHelper.SendClient(owner,m2CBuffAdd,buff.Config.NoticeClientType);
            }
            //触发添加Buff的行为实体逻辑
            buff.AddActions();
            return true;
        }

        public static void Remove(this BuffComponent self, long buffId)
        {
            if (!self.Children.TryGetValue(buffId, out Entity entity))
                return;
            Buff buff = entity as Buff;
            try
            {
                self.ConfigIdBuffs.Remove(buff.configId);

                if (buff.Config.NoticeClientType != NoticeClientType.NoNotice)
                {
                    Unit owner = buff.Owner;
                    M2C_BuffRemove m2CBuffRemove = M2C_BuffRemove.Create();
                    m2CBuffRemove.BuffId = buff.Id;
                    m2CBuffRemove.UnitId = owner.Id;
                    MMOMessageHelper.SendClient(owner,m2CBuffRemove,buff.Config.NoticeClientType);
                }

                //触发移除Buff的行为实体逻辑
                buff.RemoveActions();
                buff.Dispose();
            }
            catch (Exception e)
            {
                Log.Error($"Buff 'Remove' Error! buffCompId: {self.Id}, buffId:{buff.Id}, buffConfigId: {buff.Config?.Id ?? 0}, {e}");
            }
        }
    }
}