namespace ET.Server
{
    [MessageSessionHandler(SceneType.Gate)]
    [FriendOfAttribute(typeof(ET.Server.AccountInfo))]
    public class C2R_ChangeNickNameHandler : MessageSessionHandler<C2G_ChangeNickName,G2C_ChangeNickName>
    {
        protected override async ETTask Run(Session session, C2G_ChangeNickName request, G2C_ChangeNickName response)
        {
            using (await session.Root().GetComponent<CoroutineLockComponent>().Wait(CoroutineLockType.ChangeNickName,request.Account.GetLongHashCode()))
            {
                DBComponent dbComponent = session.Root().GetComponent<DBManagerComponent>().GetZoneDB(session.Zone());
            
                //查询是否有重复的昵称
                var allCountInfos = await dbComponent.Query<AccountInfo>(info => true);
                foreach (AccountInfo accountInfo in allCountInfos)
                {
                    if (accountInfo.NickName == request.NewNickName)
                    {
                        Log.Error("昵称重复");
                        response.Error = ErrorCode.ERR_ChangeNickNameError;
                        return;
                    }
                }
            
                var accountInfos = await dbComponent.Query<AccountInfo>(accountInfo => accountInfo.Account == request.Account);
                if (accountInfos.Count <= 0)
                {
                    Log.Error("未找到对应账号数据");
                    response.Error = ErrorCode.ERR_ChangeNickNameError;
                }
                else
                {
                    var accountInfo = accountInfos[0];
                    if (accountInfo.NickName != request.NewNickName)
                    {
                        accountInfo.NickName = request.NewNickName;
                        await dbComponent.Save(accountInfo);
                    }
                }
            }
        }
    }
}