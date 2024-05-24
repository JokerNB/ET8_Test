using System.Collections.Generic;
using MongoDB.Bson.Serialization.Attributes;

namespace ET.Server
{
    [ChildOf(typeof(CastComponent))]
    public class Cast : Entity,IAwake<int>,IDestroy
    {
        public int ConfigId;

        [BsonIgnore]
        public CastConfig Config => CastConfigCategory.Instance.Get(this.ConfigId);

        [BsonIgnore]
        public EntityRef<Unit> Caster;

        /// <summary>
        /// 技能释放的目标
        /// </summary>
        [BsonIgnore]
        public List<long> Target = new List<long>();

        /// <summary>
        /// 技能开始的时间
        /// </summary>
        public long StartTime;

    }
}