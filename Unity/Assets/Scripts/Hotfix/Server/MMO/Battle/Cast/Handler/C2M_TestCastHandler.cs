namespace ET.Server
{
    [MessageHandler(SceneType.Map)]
    public class C2M_TestCastHandler : MessageLocationHandler<Unit,C2M_TestCast,M2C_TestCast>
    {
        protected override async ETTask Run(Unit unit, C2M_TestCast request, M2C_TestCast response)
        {
            Log.Error($"客户端通知服务器释放技能, 技能Id : {request.CastConfigId}");
            var config = CastConfigCategory.Instance.GetOrDefault(request.CastConfigId);
            if (config == null)
            {
                response.Error = ErrorCode.ERR_ArgsError;
                return;
            }

            if (!unit.IsAlive())
            {
                response.Error = ErrorCode.ERR_Relive_Dead_Op;
                return;
            }

            response.Error = unit.CreateAndCast(request.CastConfigId);
            await ETTask.CompletedTask;
        }
    }
}