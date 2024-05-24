using System;
using System.Collections.Generic;

namespace ET.Server
{
    [EntitySystemOf(typeof(ActionsDispatcherComponent))]
    [FriendOfAttribute(typeof(ET.Server.ActionsDispatcherComponent))]
    public static partial class ActionsDispatcherComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.ActionsDispatcherComponent self)
        {
            ActionsDispatcherComponent.Instance = self;
            self.Load();
        }
        [EntitySystem]
        private static void Destroy(this ET.Server.ActionsDispatcherComponent self)
        {
            ActionsDispatcherComponent.Instance = null;
            self.dic.Clear();
        }

        public static void Load(this ActionsDispatcherComponent self)
        {
            self.dic.Clear();
            var types = CodeTypes.Instance.GetTypes(typeof(ActionsAttribute));
            foreach (Type type in types)
            {
                var attrs = type.GetCustomAttributes(typeof(ActionsAttribute), false);
                if(attrs.Length == 0)
                    continue;

                var actionsAttribute = attrs[0] as ActionsAttribute;
                object obj = Activator.CreateInstance(type);

                IActions iActions = obj as IActions;
                if (iActions == null)
                    throw new Exception($"class {type.Name} not inherit from IActions");

                self.dic[actionsAttribute.ActionsType] = iActions;
            }
        }

        public static IActions Get(this ActionsDispatcherComponent self, int type)
        {
            return self.dic.GetValueOrDefault(type);
        }
    }
}