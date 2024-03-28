using System.Collections.Generic;

namespace ET.Server
{
    [MessageSessionHandler(SceneType.Realm)]
    public class C2R_GetServerListHandler : MessageSessionHandler<C2R_GetServerList, R2C_GetServerList>
    {
        protected override async ETTask Run(Session session, C2R_GetServerList request, R2C_GetServerList response)
        {
            foreach (StartZoneConfig zoneConfig in StartZoneConfigCategory.Instance.DataList)
            {
                var zone = zoneConfig.Id;
                List<StartSceneConfig> zoneGates = StartSceneConfigCategory.Instance.Gates[zone];
                if(zoneGates == null || zoneGates.Count == 0)
                    continue;
                foreach (var startSceneConfig in zoneGates)
                {
                    ServerListInfo serverListInfo = ServerListInfo.Create();
                    serverListInfo.GateAddress = startSceneConfig.InnerIPPort.ToString();
                    serverListInfo.Name = zoneConfig.ZoneName;
                    serverListInfo.Status = (int)zoneConfig.Status;
                    response.ServerListInfos.Add(serverListInfo);
                }
            }
            session.Diconnect().Coroutine();
            await ETTask.CompletedTask;
        }
    }
}