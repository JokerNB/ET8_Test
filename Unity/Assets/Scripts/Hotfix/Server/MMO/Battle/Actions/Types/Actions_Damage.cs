namespace ET.Server
{
    [Actions(ActionsType.Damage)]
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public class Actions_Damage : IActions
    {
        public void Run(Actions actions, ActionsRunType actionsRunType)
        {
            Cast cast = actions.CastSelf;
            if (cast == null || actionsRunType != ActionsRunType.CastHit)
                return;

            if (cast.Target.Count <= 0)
                return;

            UnitComponent unitComponent = actions.Root().GetComponent<UnitComponent>();
            foreach (long unitId in cast.Target)
            {
                Unit unit = unitComponent.Get(unitId);

                if(unit == null || unit.IsDisposed)
                    continue;
                Unit caster = cast.Caster;
                BattleHelper.CalcAttack(caster,unit,actions);
            }
        }
    }
}