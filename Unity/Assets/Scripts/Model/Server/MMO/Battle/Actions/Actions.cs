using MongoDB.Bson.Serialization.Attributes;

namespace ET.Server
{

    [ChildOf(typeof(ActionsTempComponent))]
    //ISerializeToEntity 序列化和反序列化并且还可以进行存库和传输
    public class Actions : Entity,IAwake<int>,IDestroy,ISerializeToEntity
    {
        public int ConfigId;
        [BsonIgnore]
        public ActionsConfig Config => ActionsConfigCategory.Instance.Get(this.ConfigId);

        [BsonIgnore]
        public EntityRef<Unit> Caster;

        [BsonIgnore]
        public EntityRef<Unit> Owner;

        [BsonIgnore]
        public Cast CastSelf => this.Parent.GetParent<Cast>();

        [BsonIgnore]
        public Buff BuffSelf => this.Parent.GetParent<Buff>();
    }
}