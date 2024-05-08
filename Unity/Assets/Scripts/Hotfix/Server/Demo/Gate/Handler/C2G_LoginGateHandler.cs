using System;


namespace ET.Server
{
    [MessageSessionHandler(SceneType.Gate)]
    [FriendOfAttribute(typeof(ET.Server.AccountPlayerInfo))]
    public class C2G_LoginGateHandler : MessageSessionHandler<C2G_LoginGate, G2C_LoginGate>
    {
        protected override async ETTask Run(Session session, C2G_LoginGate request, G2C_LoginGate response)
        {
            Scene root = session.Root();
            var account = root.GetComponent<GateSessionKeyComponent>().Get(request.Key);
            if (account == null)
            {
                response.Error = ErrorCore.ERR_ConnectGateKeyError;
                Log.Error("Gate Key验证失败！！！");
                session.Disconnect().Coroutine();
                return;
            }

            session.RemoveComponent<SessionAcceptTimeoutComponent>();

            PlayerComponent playerComponent = root.GetComponent<PlayerComponent>();
            Player player = playerComponent.GetByAccount(account);
            if (player == null)
            {
                player = playerComponent.AddChild<Player, string, string>(account, request.Token);
                playerComponent.Add(player);
                PlayerSessionComponent playerSessionComponent = player.AddComponent<PlayerSessionComponent>();
                playerSessionComponent.AddComponent<MailBoxComponent, MailBoxType>(MailBoxType.GateSession);
                await playerSessionComponent.AddLocation(LocationType.GateSession);

                player.AddComponent<MailBoxComponent, MailBoxType>(MailBoxType.UnOrderedMessage);
                await player.AddLocation(LocationType.Player);

                session.AddComponent<SessionPlayerComponent>().Player = player;
                playerSessionComponent.Session = session;
            }
            else
            {
                // 判断是否在战斗
                PlayerRoomComponent playerRoomComponent = player.GetComponent<PlayerRoomComponent>();
                if (playerRoomComponent.RoomActorId != default)
                {
                    CheckRoom(player, session).Coroutine();
                }
                else
                {
                    PlayerSessionComponent playerSessionComponent = player.GetComponent<PlayerSessionComponent>();
                    playerSessionComponent.Session = session;
                }
            }

            response.PlayerId = player.Id;
            var nickName = await FindNickName(session, account);
            response.NickName = nickName;
            await ETTask.CompletedTask;
        }

        private static async ETTask CheckRoom(Player player, Session session)
        {
            Fiber fiber = player.Fiber();
            await fiber.WaitFrameFinish();

            G2Room_Reconnect g2RoomReconnect = G2Room_Reconnect.Create();
            g2RoomReconnect.PlayerId = player.Id;
            using Room2G_Reconnect room2GateReconnect = await fiber.Root.GetComponent<MessageSender>().Call(
                player.GetComponent<PlayerRoomComponent>().RoomActorId,
                g2RoomReconnect) as Room2G_Reconnect;
            G2C_Reconnect g2CReconnect = G2C_Reconnect.Create();
            g2CReconnect.StartTime = room2GateReconnect.StartTime;
            g2CReconnect.Frame = room2GateReconnect.Frame;
            g2CReconnect.UnitInfos.AddRange(room2GateReconnect.UnitInfos);
            session.Send(g2CReconnect);

            session.AddComponent<SessionPlayerComponent>().Player = player;
            player.GetComponent<PlayerSessionComponent>().Session = session;
        }

        private static async ETTask<string> FindNickName(Session session, string account)
        {
            AccountPlayerInfo accountInfo = null;
            string nickName = null;
            CoroutineLockComponent coroutineLockComponent = session.Root().GetComponent<CoroutineLockComponent>();
            using (session.AddComponent<SessionLockingComponent>())
            {
                using (await coroutineLockComponent.Wait(CoroutineLockType.FindNickName, account.GetLongHashCode()))
                {
                    //读取数据库查看账号数据
                    var dbComponent = session.Root().GetComponent<DBManagerComponent>().GetZoneDB(session.Zone());
                    var accountInfos = await dbComponent.Query<AccountPlayerInfo>(info => info.Account == account);
                    if (accountInfos != null && accountInfos.Count > 0)
                    {
                        accountInfo = accountInfos[0];
                        session.AddChild(accountInfo);
                        nickName = accountInfo.NickName;
                    }
                    else
                    {
                        accountInfo = session.AddChild<AccountPlayerInfo>();
                        accountInfo.Account = account;
                        await dbComponent.Save(accountInfo);
                    }
                }
            }

            return nickName;
        }
    }
}