namespace ET.Server
{
    //创建和管理BuffCreateInfo
    [ComponentOf(typeof(BuffComponent))]
    public class BuffTempComponent : Entity, IAwake,IDestroy
    {
    }
}