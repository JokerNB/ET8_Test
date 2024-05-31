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

            //获取服务器列表
            C2R_GetServerList c2RGetServerList = C2R_GetServerList.Create();
            c2RGetServerList.Account = account;
            c2RGetServerList.Token = response.Token;
            R2C_GetServerList r2CGetServerList = await clientSenderComponent.Call(c2RGetServerList) as R2C_GetServerList;
            if (r2CGetServerList.Error != ErrorCode.ERR_Success)
            {
                Log.Error("请求服务器列表失败！");
                return;
            }

            root.GetComponent<ServerInfoComponent>().Add(r2CGetServerList.ServerInfoList);

            //请求角色列表
            C2R_GetRolesList c2RGetRolesList = C2R_GetRolesList.Create();
            c2RGetServerList.Account = account;
            c2RGetServerList.Token = response.Token;
            R2C_GetRolesList r2CGetRolesList = await clientSenderComponent.Call(c2RGetRolesList) as R2C_GetRolesList;
            if (r2CGetRolesList.Error != ErrorCode.ERR_Success)
            {
                Log.Error("请求角色列表失败！");
                return;
            }
            root.GetComponent<RolesInfoComponent>().Add(r2CGetRolesList.RolesInfosList);

            var playerComponent = root.GetComponent<PlayerComponent>();
            playerComponent.Token = response.Token;
            playerComponent.Account = account;
            playerComponent.Password = password;
            await EventSystem.Instance.PublishAsync(root, new LoginAccountFinish());
        }

        public static async ETTask<R2C_GetRealmKey> GetRealmKey(Scene root, string Token, string Account, int ServerId)
        {
            C2R_GetRealmKey c2RGetRealmKey = C2R_GetRealmKey.Create();
            c2RGetRealmKey.Token = Token;
            c2RGetRealmKey.Account = Account;
            c2RGetRealmKey.ServerId = ServerId;
            var r2CGetRealmKey = await root.GetComponent<ClientSenderComponent>().Call(c2RGetRealmKey) as R2C_GetRealmKey;
            return r2CGetRealmKey;
        }
    }
}