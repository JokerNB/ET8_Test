namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class PlayerComponent: Entity, IAwake
    {
        public long MyId { get; set; }
        public string Account { get; set; }
        public string NickName { get; set; }
        public bool isNewPlayer { get; set; }
        public long Token { get; set; }
    }
}