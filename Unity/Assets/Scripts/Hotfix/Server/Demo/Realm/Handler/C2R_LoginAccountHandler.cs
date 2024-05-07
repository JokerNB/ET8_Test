namespace ET.Server
{
    [MessageSessionHandler(SceneType.LoginCenter)]
    [FriendOfAttribute(typeof(ET.Server.AccountInfo))]
    public class C2R_LoginAccountHandler : MessageSessionHandler<C2R_LoginAccount, R2C_LoginAccount>
    {
        protected override async ETTask Run(Session session, C2R_LoginAccount request, R2C_LoginAccount response)
        {
            session.RemoveComponent<SessionAcceptTimeoutComponent>();
            if (session.GetComponent<SessionLockingComponent>() != null)
            {
                response.Error = ErrorCode.ERR_RequestRepeatedly;
                session.Disconnect().Coroutine();
                return;
            }
            //判定账号密码是否符合规则
#if !UNITY_EDITOR
            var checkRegexMatchComponent = session.Root().AddComponent<CheckRegexMatchComponent>();
            if (!checkRegexMatchComponent.isMatchAccount(request.Account) || checkRegexMatchComponent.isMatchPassword(request.Password))
            {
                response.Error = ErrorCode.ERR_LoginPasswrodError;
                session.Disconnect().Coroutine();
                return;
            }
#else
        if (string.IsNullOrEmpty(request.Account) || string.IsNullOrEmpty(request.Password))
        {
            response.Error = ErrorCode.ERR_LoginInfoEmpty;
            session.Disconnect().Coroutine();
            return;
        }
#endif
            CoroutineLockComponent coroutineLockComponent = session.Root().GetComponent<CoroutineLockComponent>();
            using (session.AddComponent<SessionLockingComponent>())
            {
                using (await coroutineLockComponent.Wait(CoroutineLockType.LoginAccount,request.Account.GetLongHashCode()))
                {
                    AccountInfo accountInfo = null;
                    //读取数据库查看账号数据
                    var dbComponent = session.Root().GetComponent<DBManagerComponent>().GetZoneDB(session.Zone());
                    var accountInfos = await dbComponent.Query<AccountInfo>(info => info.Account == request.Account);
                    if (accountInfos != null && accountInfos.Count > 0)
                    {
                        accountInfo = accountInfos[0];
                        session.AddChild(accountInfo);
                        if (accountInfo.accountType == (int)AccountType.BlackList)
                        {
                            response.Error = ErrorCode.ERR_AccountInBlackListError;
                            session.Disconnect().Coroutine();
                            accountInfo?.Dispose();
                            return;
                        }

                        if (!accountInfo.Password.Equals(request.Password))
                        {
                            response.Error = ErrorCode.ERR_LoginPasswrodError;
                            session.Disconnect().Coroutine();
                            accountInfo?.Dispose();
                            return;
                        }

                        if (accountInfo.CreateTime == 0)
                        {
                            accountInfo.CreateTime = TimeInfo.Instance.ServerNow();
                            await dbComponent.Save(accountInfo);
                        }
                    }
                    else
                    {
                        accountInfo = session.AddChild<AccountInfo>();
                        accountInfo.Account = request.Account;
                        accountInfo.Password = request.Password;
                        accountInfo.CreateTime = TimeInfo.Instance.ServerNow();
                        accountInfo.accountType = (int)AccountType.General;
                        await dbComponent.Save(accountInfo);
                    }

                    R2L_LoginAccountRequest r2LLoginAccountRequest = R2L_LoginAccountRequest.Create();
                    r2LLoginAccountRequest.AccountName = request.Account;

                    var loginCenterConfig = StartSceneConfigCategory.Instance.LoginCenterConfig;
                    var loginAccountResponse = await session.Fiber().Root.GetComponent<MessageSender>().Call(loginCenterConfig.ActorId, r2LLoginAccountRequest) as
                            L2R_LoginAccountResponse;

                    if (loginAccountResponse.Error != ErrorCode.ERR_Success)
                    {
                        response.Error = loginAccountResponse.Error;
                        session?.Disconnect().Coroutine();
                        accountInfo?.Dispose();
                        return;
                    }

                    Session otherSesssion = session.Root().GetComponent<AccountSessionComponent>().Get(request.Account);
                    otherSesssion?.Send(A2C_Disconnect.Create());
                    otherSesssion?.Disconnect().Coroutine();
                    session.Root().GetComponent<AccountSessionComponent>().Add(request.Account,session);
                    session.AddComponent<AccountCheckOutTimeComponent,string>(request.Account);

                    string token = TimeInfo.Instance.ServerNow().ToString() + RandomGenerator.RandomNumber(int.MinValue,int.MaxValue).ToString();
                    session.Root().GetComponent<TokenComponent>().Remove(request.Account);
                    session.Root().GetComponent<TokenComponent>().Add(request.Account,token);

                    response.Token = token;
                    accountInfo?.Dispose();
                }
            }
        }
    }
}