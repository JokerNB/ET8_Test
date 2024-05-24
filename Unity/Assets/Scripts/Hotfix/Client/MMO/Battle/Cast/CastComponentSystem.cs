using System.Collections.Generic;

namespace ET.Client
{
    [EntitySystemOf(typeof(ClientCastComponent))]
    [FriendOfAttribute(typeof(ET.Client.ClientCastComponent))]
    public static partial class CastComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.ClientCastComponent self)
        {
        }

        [EntitySystem]
        private static void Destroy(this ET.Client.ClientCastComponent self)
        {
            foreach (ClientCast cast in self.Casts.Values)
            {
                cast?.Dispose();
            }
            self.Casts.Clear();
        }

        public static void Add(this ClientCastComponent self, ClientCast clientCast)
        {
            if(self.Casts.ContainsKey(clientCast.Id))
                return;
            self.Casts.Add(clientCast.Id,clientCast);
        }

        public static ClientCast Get(this ClientCastComponent self, long Id)
        {
            return self.Casts.GetValueOrDefault(Id);
        }

        public static void Remove(this ClientCastComponent self, long Id)
        {
            ClientCast clientCast = self.Get(Id);
            if (clientCast != null)
            {
                self.Casts.Remove(Id);
                clientCast?.Dispose();
            }
        }
    }
}