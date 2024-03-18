using System;
using System.Net;


namespace ET.Server
{
    [MessageSessionHandler(SceneType.Realm)]
    [FriendOfAttribute(typeof(ET.Server.AccountInfo))]
    public class C2R_LoginHandler : MessageSessionHandler<C2R_Login, R2C_Login>
    {
        protected override async ETTask Run(Session session, C2R_Login request, R2C_Login response)
        {
            //判定账号密码是否符合规则
#if !UNITY_EDITOR
            var checkRegexMatchComponent = session.Root().AddComponent<CheckRegexMatchComponent>();
            if (!checkRegexMatchComponent.isMatchAccount(request.Account) || checkRegexMatchComponent.isMatchPassword(request.Password))
            {
                response.Error = ErrorCode.ERR_LoginPasswrodError;
                CloseSession(session).Coroutine();
                return;
            }
#else
			if (string.IsNullOrEmpty(request.Account) || string.IsNullOrEmpty(request.Password))
			{
				response.Error = ErrorCode.ERR_LoginInfoEmpty;
				CloseSession(session).Coroutine();
				return;
			}
#endif
            AccountInfo accountInfo = null;
            using (await session.Root().GetComponent<CoroutineLockComponent>().Wait(CoroutineLockType.LoginAccount, request.Account.GetLongHashCode()))
            {
                //读取数据库查看账号数据
                var dbComponent = session.Root().GetComponent<DBManagerComponent>().GetZoneDB(session.Zone());
                var accountInfos = await dbComponent.Query<AccountInfo>(info => info.Account == request.Account);
                if (accountInfos.Count <= 0)
                {
                    var accountInfosComponent = session.GetComponent<AccountInfosComponent>() ?? session.AddComponent<AccountInfosComponent>();
                    accountInfo = accountInfosComponent.AddChild<AccountInfo>();
                    accountInfo.Account = request.Account;
                    accountInfo.Password = request.Password;
                    accountInfo.isNewPlayer = true;
                    await dbComponent.Save(accountInfo);
                }
                else
                {
                    accountInfo = accountInfos[0];
                    if (accountInfo.Password != request.Password)
                    {
                        response.Error = ErrorCode.ERR_LoginPasswrodError;
                        CloseSession(session).Coroutine();
                        return;
                    }

                    if (!string.IsNullOrEmpty(accountInfo.NickName) && accountInfo.isNewPlayer)
                    {
                        accountInfo.isNewPlayer = false;
                        await dbComponent.Save(accountInfo);
                    }
                }
            }

            // 随机分配一个Gate
            StartSceneConfig config = RealmGateAddressHelper.GetGate(session.Zone(), request.Account);
            Log.Debug($"gate address: {config}");

            // 向gate请求一个key,客户端可以拿着这个key连接gate
            R2G_GetLoginKey r2GGetLoginKey = R2G_GetLoginKey.Create();
            r2GGetLoginKey.Account = request.Account;
            G2R_GetLoginKey g2RGetLoginKey = (G2R_GetLoginKey)await session.Fiber().Root.GetComponent<MessageSender>().Call(
                config.ActorId, r2GGetLoginKey);

            response.Address = config.InnerIPPort.ToString();
            response.Key = g2RGetLoginKey.Key;
            response.GateId = g2RGetLoginKey.GateId;
            response.IsNewPlayer = accountInfo.isNewPlayer;
            response.NickName = accountInfo.NickName;

            CloseSession(session).Coroutine();
        }

        private async ETTask CloseSession(Session session)
        {
            await session.Root().GetComponent<TimerComponent>().WaitAsync(1000);
            session.Dispose();
        }
    }
}
