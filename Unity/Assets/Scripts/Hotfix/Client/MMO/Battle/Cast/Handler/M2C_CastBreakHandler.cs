using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    public class M2C_CastBreakHandler : MessageHandler<Scene, M2C_CastBreak>
    {
        protected override async ETTask Run(Scene scene, M2C_CastBreak message)
        {
            Log.Error($"Zone {scene.Zone()} -> 玩家 {message.CasterId} 的技能{message.CastId}被打断了");
            Unit caster = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.CasterId);
            if (caster == null)
                return;
            ClientCast clientCast = caster.GetComponent<ClientCastComponent>().Get(message.CastId);
            if (clientCast == null)
                return;

            //技能被打断，回到idle状态，回收技能特效，模型，UI等资源
            EventSystem.Instance.Publish(scene.CurrentScene(), new CastBreak
            {
                CasterId = message.CasterId,
                CastId = message.CastId
            });

            caster.GetComponent<ClientCastComponent>().Remove(message.CastId);
            await ETTask.CompletedTask;
        }
    }
}