using System.Collections.Generic;

namespace ET.Server
{
    [ChildOf(typeof(MonsterMapComponent))]
    public class CreateMonsterInfo : Entity, IAwake<int>
    {
        public int monsterId;
    }

    [ComponentOf(typeof(Scene))]
    public class MonsterMapComponent : Entity, IAwake , IDestroy
    {
        public Dictionary<int, List<EntityRef<Unit>>> GroupId_UnitsDic = new Dictionary<int, List<EntityRef<Unit>>>();
    }
}