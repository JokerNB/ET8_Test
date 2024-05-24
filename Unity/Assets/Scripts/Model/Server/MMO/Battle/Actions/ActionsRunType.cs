namespace ET.Server
{
    /// <summary>
    /// 执行的类型
    /// </summary>
    public enum ActionsRunType
    {
        /// <summary>
        /// 增加buff
        /// </summary>
        BuffAdd,
        /// <summary>
        /// buff迭代
        /// </summary>
        BuffTick,
        /// <summary>
        /// buff移除
        /// </summary>
        BuffRemove,
        /// <summary>
        /// 技能命中
        /// </summary>
        CastHit,
        /// <summary>
        /// 弹道初始
        /// </summary>
        BulletAwake,
        /// <summary>
        /// 弹道销毁
        /// </summary>
        BulletDestroy,
        /// <summary>
        /// 弹道迭代
        /// </summary>
        BulletTick,
    }
}