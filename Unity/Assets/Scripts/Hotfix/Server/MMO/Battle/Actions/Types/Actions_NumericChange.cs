namespace ET.Server
{
    [Actions(ActionsType.NumericChange)]
    [FriendOfAttribute(typeof(ET.Server.Actions))]
    public class Actions_NumericChange : IActions
    {
        public void Run(Actions actions, ActionsRunType actionsRunType)
        {
            Unit owner = actions.Owner;
            if (owner == null)
                return;

            int numericType = int.Parse(actions.Config.Param[0]);
            int numericValue = int.Parse(actions.Config.Param[1]);

            switch (actionsRunType)
            {
                case ActionsRunType.CastHit:
                case ActionsRunType.BuffAdd:
                    //根据参数 增加或减少对应属性的数值
                    owner.GetComponent<NumericComponent>()[numericType] += numericValue;
                    break;
                case ActionsRunType.BuffRemove:
                    owner.GetComponent<NumericComponent>()[numericType] -= numericValue;
                    break;
            }
        }
    }
}