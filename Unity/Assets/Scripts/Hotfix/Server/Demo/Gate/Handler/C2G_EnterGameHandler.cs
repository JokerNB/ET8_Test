namespace ET.Server
{
    [MessageSessionHandler(SceneType.Gate)]
    public class C2G_EnterGameHandler : MessageSessionHandler<C2G_EnterGame,G2C_EnterGame>
    {
        protected override async ETTask Run(Session session, C2G_EnterGame request, G2C_EnterGame response)
        {
            Player player = session.GetComponent<SessionPlayerComponent>().Player;
            response.MyUnitId = player.Id;

            await ETTask.CompletedTask;
        }
    }
}