namespace ET.Server
{
    [MessageLocationHandler(SceneType.Map)]
    public class C2M_ChooseModelDifficultyHandler: MessageLocationHandler<Unit, C2M_ChooseModelDifficulty, M2C_ChooseModelDifficulty>
    {
        protected override async ETTask Run(Unit unit, C2M_ChooseModelDifficulty request, M2C_ChooseModelDifficulty response)
        {
            var modelConfig = ModelCategory.Instance.GetOrDefault(request.Model);
            if (modelConfig == null)
            {
                response.Error = ErrorCode.ERR_ChooseModelTypeError;
                return;
            }

            if (modelConfig.DifficultyType == 1)
            {
                var config = DifficultyNormalCategory.Instance.GetOrDefault(request.Difficulty);
                if (config == null)
                {
                    response.Error = ErrorCode.ERR_ChooseDifficultyTypeError;
                    return;
                }
            }
            else if (modelConfig.DifficultyType == 1)
            {
                var config = DifficultyHappyCategroy.Instance.Get(request.Difficulty);
                if (config == null)
                {
                    response.Error = ErrorCode.ERR_ChooseDifficultyTypeError;
                    return;
                }
            }

            await ETTask.CompletedTask;
        }
    }
}