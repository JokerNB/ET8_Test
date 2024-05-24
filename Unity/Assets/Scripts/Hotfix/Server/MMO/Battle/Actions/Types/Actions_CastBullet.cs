namespace ET.Server
{
    [Actions(ActionsType.CastBullet)]
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public class Actions_CastBullet : IActions
    {
        public void Run(Actions actions, ActionsRunType actionsRunType)
        {
            Cast cast = actions.CastSelf;
            if (cast == null || actionsRunType != ActionsRunType.CastHit)
            {
                return;
            }

            if (cast.Target.Count <= 0)
            {
                return;
            }

            ActionsConfig config = actions.Config;

            UnitComponent unitComponent = actions.Root().GetComponent<UnitComponent>();
            foreach (long uid in cast.Target)
            {
                Unit unit = unitComponent.Get(uid);
                if(unit == null)
                    continue;
                int unitId = int.Parse(config.Param[0]);
                int bulletId = int.Parse(config.Param[1]);
                Unit caster = cast.Caster;
                Unit bullet = UnitFactory.CreateBullet(cast.Root(), caster.Id, unitId, bulletId, unit.Position);
                bullet.GetComponent<BulletComponent>().Start();
            }
        }
    }
}