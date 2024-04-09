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
            long Token = response.Token;

            //获取服务器列表
            var errorCode = await GetServerList(root);
            if (errorCode != ErrorCode.ERR_Success)
            {
                Log.Error($"获取服务器列表出错 ： {errorCode}");
                return;
            }

            var playerComponent = root.GetComponent<PlayerComponent>();
            playerComponent.Token = response.Token;
            playerComponent.Account = account;
            playerComponent.Password = password;
            await EventSystem.Instance.PublishAsync(root, new LoginAccountFinish());
        }

        public static async ETTask<int> GetServerList(Scene root)
        {
            var c2RGetServerList = C2R_GetServerList.Create();
            c2RGetServerList.Account = root.GetComponent<PlayerComponent>().Account;
            var r2CGetServerList = (R2C_GetServerList)await root.GetComponent<ClientSenderComponent>().Call(c2RGetServerList);
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

        public static async ETTask LoginGate(Scene scene, string account, string password, string address, long token)
        {
            NetClient2Main_LoginGate response = await scene.GetComponent<ClientSenderComponent>().LoginGateAsync(account, password,address,token);
            if (response.Error != ErrorCode.ERR_Success)
                return;
            var playerComponent = scene.GetComponent<PlayerComponent>();
            playerComponent.MyId = response.PlayerId;

            await EventSystem.Instance.PublishAsync(scene, new LoginGateFinish());
        }
    }
}