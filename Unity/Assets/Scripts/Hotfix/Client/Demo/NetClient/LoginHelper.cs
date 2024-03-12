namespace ET.Client
{
    public static class LoginHelper
    {
        public static async ETTask Login(Scene root, string account, string password)
        {
            root.RemoveComponent<ClientSenderCompnent>();
            ClientSenderCompnent clientSenderCompnent = root.AddComponent<ClientSenderCompnent>();

            var response = await clientSenderCompnent.LoginAsync(account, password);
            if (response.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"response Error : {response.Error}");
                return;
            }

            // var errorCode = await LoginHelper.GetServerList(root.Root());
            // if (errorCode != ErrorCode.ERR_Success)
            // {
            //     return;
            // }

            root.GetComponent<PlayerComponent>().MyId = response.PlayerId;
            root.GetComponent<PlayerComponent>().Account = account;
            root.GetComponent<PlayerComponent>().NickName = response.NickName;
            await EventSystem.Instance.PublishAsync(root, new LoginFinish()
            {
                isNewPlayer = response.IsNewPlayer
            });
        }

        public static async ETTask<int> GetServerList(Scene scene)
        {
            var r2CGetServerList = (R2C_GetServerList)await scene.GetComponent<SessionComponent>().Session.Call(new C2R_GetServerList());
            if (r2CGetServerList.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"获取服务器区服列表错误 R2C_GetServerList Error {r2CGetServerList.Error}");
                return r2CGetServerList.Error;
            }
            scene.GetComponent<ServerInfosComponent>().ClearServerInfo();
            foreach (ServerListInfo serverListInfo in r2CGetServerList.ServerListInfos)
            {
                scene.GetComponent<ServerInfosComponent>().AddServerInfo(serverListInfo);
            }
            return ErrorCode.ERR_Success;
        }
    }
}