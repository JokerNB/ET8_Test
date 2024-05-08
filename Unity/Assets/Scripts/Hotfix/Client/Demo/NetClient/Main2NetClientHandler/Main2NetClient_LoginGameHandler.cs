namespace ET.Client
{
    [MessageHandler(SceneType.NetClient)]
    public class Main2NetClient_LoginGameHandler : MessageHandler<Scene, Main2NetClient_LoginGame, NetClient2Main_LoginGame>
    {
        protected override async ETTask Run(Scene root, Main2NetClient_LoginGame request, NetClient2Main_LoginGame response)
        {
            string account = request.Account;
            //创建一个gateSession，并且保存到sessionComponent中
            var netComponent = root.GetComponent<NetComponent>();
            var gateSession = await netComponent.CreateRouterSession(NetworkHelper.ToIPEndPoint(request.GateAddress), account, account);
            gateSession.AddComponent<ClientSessionErrorComponent>();
            root.GetComponent<SessionComponent>().Session = gateSession;
            C2G_LoginGate c2GLoginGate = C2G_LoginGate.Create();
            c2GLoginGate.Key = request.RealmKey;
            c2GLoginGate.AccountName = request.Account;
            G2C_LoginGate g2CLoginGate = await gateSession.Call(c2GLoginGate) as G2C_LoginGate;

            if (g2CLoginGate.Error != ErrorCode.ERR_Success)
            {
                response.Error = g2CLoginGate.Error;
                Log.Error($"登录Gate失败！！{g2CLoginGate.Error}");
                return;
            }

            Log.Debug("登录Gate成功！");
            G2C_EnterGame g2CEnterGame = await gateSession.Call(C2G_EnterGame.Create()) as G2C_EnterGame;
            if (g2CEnterGame.Error != ErrorCode.ERR_Success)
            {
                response.Error = g2CLoginGate.Error;
                Log.Error($"登录Map失败！！{g2CEnterGame.Error}");
                return;
            }

            response.PlayerId = g2CEnterGame.MyUnitId;
            response.NickName = g2CLoginGate.NickName;
        }
    }
}