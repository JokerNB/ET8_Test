namespace ET.Client
{
    [FriendOfAttribute(typeof(ET.Client.ClientBuff))]
    public static class BuffFactory
    {
        public static ClientBuff Create(Unit owner, BuffProto buffProto)
        {
            ClientBuff clientBuff = owner.GetComponent<ClientBuffComponent>().AddChildWithId<ClientBuff, int>(buffProto.Id, buffProto.ConfigId);
            clientBuff.CreateTime = buffProto.CreateTime;
            clientBuff.ExpireTime = buffProto.ExpireTime;
            clientBuff.Owner = owner;
            return clientBuff;
        }
    }
}