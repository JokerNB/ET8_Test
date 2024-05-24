using System;

namespace ET.Server
{
    public static class MMOMessageHelper
    {
        public static void SendClient(Unit unit, IMessage message, NoticeClientType noticeClientType)
        {
            if (unit == null || unit.IsDisposed)
                return;
            switch (noticeClientType)
            {
                case NoticeClientType.NoNotice:
                    break;
                case NoticeClientType.Self:
                    SendClientSelf(unit, message);
                    break;
                case NoticeClientType.Broadcast:
                    SendClientBroadcast(unit, message);
                    break;
                case NoticeClientType.BroadcastWithoutSelf:
                    SendClientBroadcastWithoutSelf(unit, message);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(noticeClientType), noticeClientType, null);
            }
        }

        public static void SendClientSelf(Unit unit, IMessage message)
        {
            MapMessageHelper.SendToClient(unit, message);
        }

        public static void SendClientBroadcast(Unit unit, IMessage message)
        {
            var dictionary = unit.GetBeSeePlayers();
            if (dictionary.Count <= 0)
                return;
            foreach (AOIEntity aoiEntity in dictionary.Values)
            {
                Unit u = aoiEntity.GetParent<Unit>();
                if (u == null || u.IsDisposed)
                    continue;
                SendClientSelf(u, message);
            }
        }

        public static void SendClientBroadcastWithoutSelf(Unit unit, IMessage message)
        {
            var dic = unit.GetBeSeePlayers();
            if (dic.Count <= 0)
                return;
            foreach (AOIEntity aoiEntity in dic.Values)
            {
                Unit u = aoiEntity.GetParent<Unit>();
                if (u == null || u.IsDisposed)
                    continue;
                if (u.Id == unit.Id)
                    continue;
                SendClientSelf(u, message);
            }
        }
    }
}