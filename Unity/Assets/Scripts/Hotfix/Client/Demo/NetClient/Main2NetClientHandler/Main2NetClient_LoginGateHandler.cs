namespace ET.Client
{
    [MessageHandler(SceneType.NetClient)]
    public class Main2NetClient_LoginGateHandler : MessageHandler<Scene, Main2NetClient_LoginGate, NetClient2Main_LoginGate>
    {
        protected override async ETTask Run(Scene scene, Main2NetClient_LoginGate request, NetClient2Main_LoginGate response)
        {
            NetComponent netComponent = scene.GetComponent<NetComponent>();
            Session gateSession =
                    await netComponent.CreateRouterSession(NetworkHelper.ToIPEndPoint(request.GateAddress), request.Account, request.Password);
            gateSession.AddComponent<ClientSessionErrorComponent>();
            scene.GetComponent<SessionComponent>().Session = gateSession;
            C2G_LoginGate c2GLoginGate = C2G_LoginGate.Create();
            c2GLoginGate.Token = request.Token;
            c2GLoginGate.Account = request.Account;
            var g2CLoginGate = (G2C_LoginGate)await gateSession.Call(c2GLoginGate);
            if (g2CLoginGate.Error != ErrorCode.ERR_Success)
            {
                Log.Error("登录Gate失败！！");
                return;
            }

            response.Error = g2CLoginGate.Error;
            response.PlayerId = g2CLoginGate.PlayerId;

            Log.Error("登录Gate成功！！！");
        }
    }
}