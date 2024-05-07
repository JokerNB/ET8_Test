namespace ET.Server
{
    [ChildOf(typeof(PlayerComponent))]
    public sealed class Player : Entity, IAwake<string,string>
    {
        public string Account { get; set; }
        public string Token { get; set; }
    }
}