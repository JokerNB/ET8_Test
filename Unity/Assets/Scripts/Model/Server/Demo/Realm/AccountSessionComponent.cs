using System.Collections.Generic;

namespace ET.Server
{
    [ComponentOf(typeof(Scene))]
    public class AccountSessionComponent : Entity,IAwake,IDestroy
    {
        public Dictionary<string, EntityRef<Session>> AccountSessionDic = new Dictionary<string, EntityRef<Session>>();
    }
}