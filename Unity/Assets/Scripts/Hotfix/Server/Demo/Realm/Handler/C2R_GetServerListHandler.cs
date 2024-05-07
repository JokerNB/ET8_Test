using System.Collections.Generic;

namespace ET.Server
{
    [MessageSessionHandler(SceneType.Realm)]
    [FriendOfAttribute(typeof(ET.Server.ServerInfoManagerComponent))]
    public class C2R_GetServerListHandler : MessageSessionHandler<C2R_GetServerList, R2C_GetServerList>
    {
        protected override async ETTask Run(Session session, C2R_GetServerList request, R2C_GetServerList response)
        {
            string token = session.Root().GetComponent<TokenComponent>().Get(request.Account);
            if (token == null || token != request.Token)
            {
                response.Error = ErrorCode.ERR_TokenError;
                session?.Disconnect().Coroutine();
                return;
            }

            foreach (var serverInfoRef in session.Root().GetComponent<ServerInfoManagerComponent>().ServerInfos)
            {
                ServerInfo serverInfo = serverInfoRef;
                response.ServerInfoList.Add(serverInfo.ToMessage());
            }

            await ETTask.CompletedTask;
        }
    }
}