namespace ET.Server
{
    [MessageSessionHandler(SceneType.LoginCenter)]
    [FriendOfAttribute(typeof(ET.Server.AccountInfo))]
    public class C2L_LoginAccountHandler : MessageSessionHandler<C2L_LoginAccount, L2C_LoginAccount>
    {
        protected override async ETTask Run(Session session, C2L_LoginAccount request, L2C_LoginAccount response)
        {
            session.RemoveComponent<SessionAcceptTimeoutComponent>();
            if (session.GetComponent<SessionLockingComponent>() != null)
            {
                response.Error = ErrorCode.ERR_RequestRepeatedly;
                session.Diconnect().Coroutine();
                return;
            }
            //判定账号密码是否符合规则
#if !UNITY_EDITOR
            var checkRegexMatchComponent = session.Root().AddComponent<CheckRegexMatchComponent>();
            if (!checkRegexMatchComponent.isMatchAccount(request.Account) || checkRegexMatchComponent.isMatchPassword(request.Password))
            {
                response.Error = ErrorCode.ERR_LoginPasswrodError;
                session.Diconnect().Coroutine();
                return;
            }
#else
        if (string.IsNullOrEmpty(request.Account) || string.IsNullOrEmpty(request.Password))
        {
            response.Error = ErrorCode.ERR_LoginInfoEmpty;
            session.Diconnect().Coroutine();
            return;
        }
#endif
            AccountInfo accountInfo = null;
            CoroutineLockComponent coroutineLockComponent = session.Root().GetComponent<CoroutineLockComponent>();
            using (session.AddComponent<SessionLockingComponent>())
            {
                using (await coroutineLockComponent.Wait(CoroutineLockType.LoginAccount,request.Account.GetLongHashCode()))
                {
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
                            session.Diconnect().Coroutine();
                            accountInfo?.Dispose();
                            return;
                        }

                        if (!accountInfo.Password.Equals(request.Password))
                        {
                            response.Error = ErrorCode.ERR_LoginPasswrodError;
                            session.Diconnect().Coroutine();
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
                        accountInfo.accountType = (int)AccountType.Player;
                        await dbComponent.Save(accountInfo);
                    }
                }
            }

            long token = RandomGenerator.RandInt64();
            response.Token = token;
        }
    }
}