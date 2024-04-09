using System.Net;
using System.Net.Sockets;
using ET.Server;

namespace ET.Client
{
    [MessageHandler(SceneType.NetClient)]
    public class Main2NetClient_LoginAccountHandler: MessageHandler<Scene, Main2NetClient_Login, NetClient2Main_Login>
    {
        protected override async ETTask Run(Scene root, Main2NetClient_Login request, NetClient2Main_Login response)
        {
            string account = request.Account;
            string password = request.Password;
            // 创建一个ETModel层的Session
            root.RemoveComponent<RouterAddressComponent>();
            // 获取路由跟realmDispatcher地址
            RouterAddressComponent routerAddressComponent =
                    root.AddComponent<RouterAddressComponent, string, int>(ConstValue.RouterHttpHost, ConstValue.RouterHttpPort);
            await routerAddressComponent.Init();
            root.AddComponent<NetComponent, AddressFamily, NetworkProtocol>(routerAddressComponent.RouterManagerIPAddress.AddressFamily, NetworkProtocol.UDP);
            root.GetComponent<FiberParentComponent>().ParentFiberId = request.OwnerFiberId;

            NetComponent netComponent = root.GetComponent<NetComponent>();

            // IPEndPoint realmAddress = routerAddressComponent.GetRealmAddress(account);
            IPEndPoint LoginCenterAddress = new IPEndPoint(IPAddress.Parse(ConstValue.LoginCenterHttpHost), ConstValue.LoginCenterHttpPort);

            L2C_LoginAccount r2CLogin;
            // Session session = await netComponent.CreateRouterSession(realmAddress, account, password);
            Session session = await netComponent.CreateRouterSession(LoginCenterAddress, account, password);

            C2L_LoginAccount c2RLogin = C2L_LoginAccount.Create();
            c2RLogin.Account = account;
            c2RLogin.Password = password;
            r2CLogin = (L2C_LoginAccount)await session.Call(c2RLogin);



            if (r2CLogin.Error == ErrorCode.ERR_Success)
            {
                IPEndPoint realmAddress = routerAddressComponent.GetRealmAddress(account);
                Session session_Realm = await netComponent.CreateRouterSession(realmAddress, account, password);
                root.AddComponent<SessionComponent>().Session = session_Realm;
                session.Diconnect().Coroutine();
            }
            else
            {
                session?.Dispose();
            }

            response.Token = r2CLogin.Token;
            response.Error = r2CLogin.Error;
        }
    }
}