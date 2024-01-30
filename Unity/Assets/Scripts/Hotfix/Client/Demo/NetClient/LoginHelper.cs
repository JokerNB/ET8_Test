namespace ET.Client
{
    public static class LoginHelper
    {
        public static async ETTask Login(Scene root, string account, string password)
        {
            root.RemoveComponent<ClientSenderCompnent>();
            ClientSenderCompnent clientSenderCompnent = root.AddComponent<ClientSenderCompnent>();

            var response = await clientSenderCompnent.LoginAsync(account, password);
            if (response.Error != ErrorCode.ERR_Success)
            {
                Log.Error($"response Error : {response.Error}");
                return;
            }

            root.GetComponent<PlayerComponent>().MyId = response.PlayerId;
            root.GetComponent<PlayerComponent>().Account = account;
            root.GetComponent<PlayerComponent>().NickName = response.NickName;
            await EventSystem.Instance.PublishAsync(root, new LoginFinish()
            {
                isNewPlayer = response.IsNewPlayer
            });
        }
    }
}