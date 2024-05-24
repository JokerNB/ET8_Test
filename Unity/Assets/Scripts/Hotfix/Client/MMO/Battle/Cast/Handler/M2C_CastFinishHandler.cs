using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    public class M2C_CastFinishHandler : MessageHandler<Scene, M2C_CastFinish>
    {
        protected override async ETTask Run(Scene scene, M2C_CastFinish message)
        {
            Log.Error($"Zone {scene.Zone()} -> 玩家 {message.CasterId} 的技能 {message.CastId} 结束了");
            Unit caster = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.CasterId);
            if (caster == null)
                return;
            ClientCast clientCast = caster.GetComponent<ClientCastComponent>().Get(message.CastId);
            if (clientCast == null)
                return;

            //技能结束，播放技能后摇，回到idle状态，回收技能特效，模型，UI等
            EventSystem.Instance.Publish(scene.CurrentScene(), new CastFinish
            {
                CasterId = message.CasterId,
                CastId = message.CastId
            });

            caster.GetComponent<ClientCastComponent>().Remove(message.CastId);
            await ETTask.CompletedTask;
        }
    }
}