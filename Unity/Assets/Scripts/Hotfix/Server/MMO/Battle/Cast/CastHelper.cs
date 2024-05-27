namespace ET.Server
{
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public static class CastHelper
    {
        /// <summary>
        /// 创建并释放Cast
        /// </summary>
        /// <param name="caster"></param>
        /// <param name="castConfigId"></param>
        /// <returns></returns>
        public static int CreateAndCast(this Unit caster, int castConfigId)
        {
            return CreatCast(caster, castConfigId).Cast();
        }

        public static Cast CreatCast(this Unit caster, int castConfigId)
        {
            CastComponent castComponent = caster.GetComponent<CastComponent>();
            if (castComponent == null)
                return null;

            Cast cast = castComponent.Create(castConfigId);
            cast.Caster = caster;
            caster.GetComponent<SkillStatusComponent>().StartSkill(cast);

            return cast;
        }
    }
}