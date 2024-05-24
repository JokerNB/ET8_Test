using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    [FriendOfAttribute(typeof(ET.Client.ClientCast))]
    public class M2C_CastHitHandler : MessageHandler<Scene, M2C_CastHit>
    {
        protected override async ETTask Run(Scene scene, M2C_CastHit message)
        {
            Log.Error($"Zone {scene.Zone()} -> 玩家 {message.CasterId} 的技能{message.CastId} 命中了 {message.TargetsId.ListToString()}");
            Unit caster = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.CasterId);
            if (caster == null)
                return;
            ClientCast clientCast = caster.GetComponent<ClientCastComponent>().Get(message.CastId);
            if (clientCast == null)
                return;
            clientCast.TargetId.Clear();
            foreach (long targetId in message.TargetsId)
            {
                Unit target = scene.CurrentScene().GetComponent<UnitComponent>().Get(targetId);
                if (target == null || target.IsDisposed)
                    continue;
                clientCast.TargetId.Add(targetId);
            }

            //技能命中，一般播放命中特效之类的，或者和前摇配合校正技能之类的
            foreach (long targetId in message.TargetsId)
            {
                EventSystem.Instance.Publish(scene.CurrentScene(), new CastHit
                {
                    CasterId = message.CasterId,
                    TargetId = targetId,
                    CastId = message.CastId
                });
            }

            await ETTask.CompletedTask;
        }
    }
}