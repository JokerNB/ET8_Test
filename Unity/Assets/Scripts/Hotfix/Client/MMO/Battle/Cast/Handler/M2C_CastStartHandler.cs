using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    [FriendOfAttribute(typeof(ET.Client.ClientCast))]
    public class M2C_CastStartHandler : MessageHandler<Scene, M2C_CastStart>
    {
        protected override async ETTask Run(Scene scene, M2C_CastStart message)
        {
            Log.Error($"$Zone {scene.Zone()} -> 玩家 {message.CasterId} 开始释放 {message.CastConfigId} 技能 {message.CasterId}");
            Unit caster = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.CasterId);
            if (caster == null)
                return;
            ClientCast clientCast = CastFactory.Create(caster, message.CastId, (int)message.CastConfigId);
            clientCast.TargetId.AddRange(message.TargetsId);
            caster.GetComponent<ClientCastComponent>().Add(clientCast);
            //技能释放流程的开始，此处可以自行介入行为树或状态机之类的
            //开始播放技能前摇，技能特效，音效等
            EventSystem.Instance.Publish(scene.CurrentScene(), new CastStart
            {
                CasterId = message.CasterId,
                CastConfigId = message.CastConfigId,
                CastId = message.CastId
            });
            await ETTask.CompletedTask;
        }
    }
}