namespace ET.Client
{
    [FriendOfAttribute(typeof(ET.Client.ClientCast))]
    public static class CastFactory
    {
        public static ClientCast Create(Unit Caster, long id, int configId)
        {
            ClientCast clientCast = Caster.GetComponent<ClientCastComponent>().AddChildWithId<ClientCast, int>(id, configId);
            clientCast.CasterId = Caster.Id;
            return clientCast;
        }
    }
}