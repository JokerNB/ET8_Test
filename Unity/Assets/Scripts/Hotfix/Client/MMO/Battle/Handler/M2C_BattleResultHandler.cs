namespace ET.Client
{
    [MessageHandler(SceneType.Demo)]
    public class M2C_BattleResultHandler : MessageHandler<Session, M2C_BattleResult>
    {
        protected override async ETTask Run(Session entity, M2C_BattleResult message)
        {
            await ETTask.CompletedTask;
        }
    }
}