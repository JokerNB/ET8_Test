namespace ET.Server
{
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public static class CastHelper
    {
        /// <summary>
        /// 创建Cast
        /// </summary>
        /// <param name="Caster"></param>
        /// <param name="castConfigId"></param>
        /// <returns></returns>
        public static Cast Create(this Unit Caster, int castConfigId)
        {
            Log.Error("创建技能");
            CastComponent castComponent = Caster.GetComponent<CastComponent>();
            if (castComponent == null)
                return null;
            Cast cast = castComponent.Create(castConfigId);
            cast.Caster = Caster;
            return cast;
        }

        /// <summary>
        /// 创建并释放Cast
        /// </summary>
        /// <param name="caster"></param>
        /// <param name="castConfigId"></param>
        /// <returns></returns>
        public static int CreateAndCast(this Unit caster, int castConfigId)
        {
            Log.Error("创建并释放技能");
            return caster.Create(castConfigId).Cast();
        }
    }
}