namespace ET.Client
{
    public static class LoginHelper
    {
        public static async ETTask Login(Scene root, string account, string password)
        {
            root.RemoveComponent<ClientSenderCompnent>();
            ClientSenderCompnent clientSenderCompnent = root.AddComponent<ClientSenderCompnent>();

            long playerId = await clientSenderCompnent.LoginAsync(account, password);
            if (playerId == -1)
            {
                Log.Error("LoginError!PlayerId == -1 , LoginError!Please Check Your Account or Password.");
                return;
            }

            root.GetComponent<PlayerComponent>().MyId = playerId;
            
            await EventSystem.Instance.PublishAsync(root, new LoginFinish());
        }
    }
}