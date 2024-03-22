namespace ET.Server
{
    [MessageHandler(SceneType.Realm)]
    public class C2R_GetServerListHandler : MessageSessionHandler<C2R_GetServerList, R2C_GetServerList>
    {
        protected override async ETTask Run(Session session, C2R_GetServerList request, R2C_GetServerList response)
        {
            foreach (StartZoneConfig zoneConfig in StartZoneConfigCategory.Instance.DataList)
            {
                ServerListInfo serverListInfo = ServerListInfo.Create();
                serverListInfo.Zone = zoneConfig.Id;
                serverListInfo.Name = zoneConfig.ZoneName;
                serverListInfo.Status = (int)zoneConfig.Status;
                response.ServerListInfos.Add(serverListInfo);
            }
            await ETTask.CompletedTask;
        }
    }
}