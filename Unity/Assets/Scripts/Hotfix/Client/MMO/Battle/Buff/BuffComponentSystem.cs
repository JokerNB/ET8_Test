using System.Collections.Generic;

namespace ET.Client
{
    [EntitySystemOf(typeof(ClientBuffComponent))]
    [FriendOfAttribute(typeof(ET.Client.ClientBuffComponent))]
    [FriendOfAttribute(typeof(ET.Client.ClientBuff))]
    public static partial class BuffComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.ClientBuffComponent self)
        {
        }

        [EntitySystem]
        private static void Destroy(this ET.Client.ClientBuffComponent self)
        {
            foreach (ClientBuff buffsValue in self.Buffs.Values)
            {
                buffsValue?.Dispose();
            }
            self.Buffs.Clear();
        }

        public static void Add(this ClientBuffComponent self, ClientBuff clientBuff)
        {
            if (self.Buffs.ContainsKey(clientBuff.Id))
                return;
            self.Buffs.Add(clientBuff.Id, clientBuff);
            clientBuff.Owner = self.GetParent<Unit>();
        }

        public static ClientBuff Get(this ClientBuffComponent self, long id)
        {
            return self.Buffs.GetValueOrDefault(id);
        }

        public static void Remove(this ClientBuffComponent self, long buffId)
        {
            ClientBuff clientBuff = self.Get(buffId);
            if(clientBuff == null)
                return;
            self.Buffs.Remove(buffId);
            clientBuff?.Dispose();
        }

        public static void Update(this ClientBuffComponent self, BuffProto buffProto)
        {
            ClientBuff clientBuff = self.Get(buffProto.Id);
            if(clientBuff == null)
                return;
            clientBuff.CreateTime = buffProto.CreateTime;
            clientBuff.ExpireTime = buffProto.ExpireTime;
        }
    }
}