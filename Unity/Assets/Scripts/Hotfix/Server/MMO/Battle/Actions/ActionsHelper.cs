namespace ET.Server
{
    [FriendOfAttribute(typeof(ET.Server.Actions))]
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    [FriendOfAttribute(typeof(ET.Server.Buff))]
    public static class ActionsHelper
    {
        public static Actions CreateActions(this ActionsTempComponent self, int configId)
        {
            return self.AddChild<Actions, int>(configId);
        }

        public static Actions CreateActions(this BulletComponent self, int configId, Unit owner, Unit caster, ActionsRunType actionsRunType, bool autoRun = true, bool autoDispose = true)
        {
            Actions actions = self.GetComponent<ActionsTempComponent>().CreateActions(configId);
            actions.Caster = caster;
            actions.Owner = owner;

            RunActions(actions,actionsRunType,autoRun,autoDispose);

            if (actions.IsDisposed)
                return null;
            return actions;
        }

        public static Actions CreateActions(this Cast cast, int configId, Unit owner, ActionsRunType actionsRunType, bool autoRun = true, bool autoDispose = true)
        {
            Actions actions = cast.GetComponent<ActionsTempComponent>().CreateActions(configId);
            actions.Caster = cast.Caster;
            actions.Owner = owner;
            RunActions(actions, actionsRunType, autoRun, autoDispose);

            if (actions.IsDisposed)
                return null;
            return actions;
        }

        public static Actions CreateActions(this Buff buff, int ConfigId, ActionsRunType actionsRunType, bool autoRun = true, bool autoDispose = true)
        {
            Actions actions = buff.GetComponent<ActionsTempComponent>().CreateActions(ConfigId);
            actions.Owner = buff.Owner;
            RunActions(actions, actionsRunType, autoRun, autoDispose);
            if (actions.IsDisposed)
                return null;
            return actions;
        }

        public static void RunActions(Actions actions, ActionsRunType actionsRunType, bool autoRun = true, bool autoDispose = true)
        {
            if (autoRun)
            {
                if (autoDispose)
                {
                    using (actions)
                    {
                        RunActionsInner(actions, actionsRunType);
                    }
                }
                else
                {
                    RunActionsInner(actions, actionsRunType);
                }
            }
        }

        public static void RunActionsInner(Actions actions, ActionsRunType actionsRunType)
        {
            IActions actionsHandle = ActionsDispatcherComponent.Instance.Get(actions.Config.Type);
            if (actionsHandle == null)
            {
                Unit unit = actions.Owner;
                Log.Error($"Error! Actions type not found,UnitId:{unit.Id}, ActionsConfigId:{actions.ConfigId}");
                actions.Dispose();
                return;
            }

            actionsHandle.Run(actions, actionsRunType);
        }
    }
}