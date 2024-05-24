using MongoDB.Bson.Serialization.Attributes;

namespace ET.Server
{
    //辅助创建buff
    [ChildOf(typeof(BuffTempComponent))]
    public class BuffCreateInfo : Entity, IAwake<int>, IDestroy, ISerializeToEntity
    {
        public int ConfigId;
        //此处可以放：施法者。状态来源，关联技能等
    }
    [ChildOf(typeof(BuffComponent))]
    public class Buff : Entity, IAwake<int>, IDestroy, ISerializeToEntity,IDeserialize
    {
        public int configId;

        [BsonIgnore]
        public BuffConfig Config => BuffConfigCategory.Instance.Get(this.configId);

        [BsonIgnore]
        public EntityRef<Unit> Owner;

        public long CreateTime;

        //迭代间隔时间
        public int TickTime;

        //迭代开始时间
        public long TickBeginTime;

        //计时器id
        [BsonIgnore]
        public long TickTimer;

        //计时器等待id
        [BsonIgnore]
        public long WaitTickTimer;

        //过期时间
        public long ExpireTime;

        [BsonIgnore]
        public long ExpireTimer;
    }
}