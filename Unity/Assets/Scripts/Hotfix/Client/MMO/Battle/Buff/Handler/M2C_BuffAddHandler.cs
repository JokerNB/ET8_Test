using ET.EventType;

namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    public class M2C_BuffAddHandler : MessageHandler<Scene, M2C_BuffAdd>
    {
        protected override async ETTask Run(Scene scene, M2C_BuffAdd message)
        {
            Log.Error($"Zone {scene} -> 玩家 {message.UnitId} 添加了 {message.BuffData.ConfigId} Buff {message.BuffData.Id}");
            Unit unit = scene.CurrentScene().GetComponent<UnitComponent>().Get(message.UnitId);
            if (unit == null)
                return;
            ClientBuff clientBuff = BuffFactory.Create(unit, message.BuffData);
            unit.GetComponent<ClientBuffComponent>().Add(clientBuff);
            //Buff添加，状态记录到客户端BuffComponent，显示Buff图标，信息，播放buff特效等等
            EventSystem.Instance.Publish(scene.CurrentScene(), new BuffAdd
            {
                Unit = unit,
                BuffId = message.BuffData.Id,
                BuffConfigId = message.BuffData.ConfigId
            });

            await ETTask.CompletedTask;
        }
    }
}