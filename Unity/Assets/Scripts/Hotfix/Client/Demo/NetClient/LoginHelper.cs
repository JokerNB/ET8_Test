namespace ET.Client
{
    public static class LoginHelper
    {
        public static async ETTask Login(Scene root, string account, string password)
        {
            root.RemoveComponent<ClientSenderComponent>();
            
            ClientSenderComponent clientSenderComponent = root.AddComponent<ClientSenderComponent>();

            NetClient2Main_Login response = await clientSenderComponent.LoginAsync(account, password);

            if (response.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"response Error : {response.Error}");
                return;
            }

            Log.Debug("请求登陆成功！！");
            string Token = response.Token;
            
            //获取服务器列表
            var errorCode = await LoginHelper.GetServerList(root);
            if (errorCode != ErrorCode.ERR_Success)
            {
                Log.Error($"获取服务器列表出错 ： {errorCode}");
                return;
            }
            
            // C2R_GetServerList c2RGetServerList = C2R_GetServerList.Create();
            // R2C_GetServerList r2CGetServerList = (R2C_GetServerList)await clientSenderComponent.Call(c2RGetServerList);
            // if (r2CGetServerList.Error != ErrorCode.ERR_Success)
            // {
            //     Log.Error($"r2CGetServerList Error : {r2CGetServerList.Error}");
            //     return;
            // }
            //
            // if (r2CGetServerList.ServerListInfos.Count <= 0)
            // {
            //     Log.Error($"r2CGetServerList Error : {ErrorCode.ERR_GetServerInfoListNull}");
            //     return;
            // }

            var playerComponent = root.GetComponent<PlayerComponent>();
            playerComponent.MyId = response.PlayerId;
            playerComponent.Account = account;
            playerComponent.NickName = response.NickName;
            await EventSystem.Instance.PublishAsync(root, new LoginFinish());
        }

        public static async ETTask<int> GetServerList(Scene root)
        {
            var r2CGetServerList = (R2C_GetServerList)await root.GetComponent<SessionComponent>().Session.Call(C2R_GetServerList.Create());
            if (r2CGetServerList.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"获取服务器区服列表错误 R2C_GetServerList Error : {r2CGetServerList.Error}");
                return r2CGetServerList.Error;
            }
            
            root.GetComponent<ServerInfosComponent>().ClearServerInfo();
            foreach (ServerListInfo info in r2CGetServerList.ServerListInfos)
            {
                root.GetComponent<ServerInfosComponent>().AddServerInfo(info);
            }
            await ETTask.CompletedTask;
            return ErrorCode.ERR_Success;
        }
    }
}