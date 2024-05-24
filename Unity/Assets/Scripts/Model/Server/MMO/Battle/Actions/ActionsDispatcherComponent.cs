using System.Collections.Generic;

namespace ET.Server
{
    [ComponentOf(typeof(Scene))]
    public class ActionsDispatcherComponent : Entity, IAwake,IDestroy
    {
        [StaticField]
        public static ActionsDispatcherComponent Instance;

        public Dictionary<int, IActions> dic = new Dictionary<int, IActions>();
    }
}