using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    public class M2C_BuffTickHandler : MessageHandler<Scene, M2C_BuffTick>
    {
        protected override async ETTask Run(Scene scene, M2C_BuffTick message)
        {
            Log.Error($"Zone {scene.Zone()} -> 玩家 {message.UnitId} 迭代了buff {message.BuffId}");
            //BuffTick：播放特效，动画等等，例如流血动画，飘字之类的
            Unit unit = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.UnitId);
            if (unit != null)
                return;
            ClientBuff clientBuff = unit.GetComponent<ClientBuffComponent>().Get(message.BuffId);
            if (clientBuff == null)
                return;

            EventSystem.Instance.Publish(scene.CurrentScene(), new BuffTick
            {
                Unit = unit,
                BuffId = message.BuffId
            });
            await ETTask.CompletedTask;
        }
    }
}