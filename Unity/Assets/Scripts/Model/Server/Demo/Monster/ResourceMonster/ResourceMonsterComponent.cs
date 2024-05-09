namespace ET
{
    [ComponentOf(typeof(Unit))]
    public class ResourceMonsterComponent : Entity , IAwake
    {
        //默认生成的资源怪等级
        public uint CurMonsterLevel = 1;
        //击杀当前资源怪对应数量后可以解锁下一级资源怪并生成当前资源怪boss
        public uint AdvancedMonsterUnLockNum = 300;
        //资源怪生成间隔
        public float GenerateMonsterTimeInterval = 1;
        //当前一波资源怪剩余数量小于该数量则触发生成资源怪否则不生成资源怪
        public uint RemainResourceMonsterNun = 5;
        //当前资源怪生成最大数量
        public uint MaxResourceMonsterNum = 10;

        public MonsterType _MonsterType = MonsterType.ResourceMonster;

        //s =》c 生成资源怪
        //资源怪位置由客户端指定
        //服务器通知客户端生成指定配置的资源怪
        //
    }
}