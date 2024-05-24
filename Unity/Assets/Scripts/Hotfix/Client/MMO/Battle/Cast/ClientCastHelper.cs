namespace ET.Client
{
    public static class ClientCastHelper
    {
        public static async ETTask<int> CastSkill(Scene scene, int castConfigId)
        {
            C2M_TestCast c2MTestCast = C2M_TestCast.Create();
            c2MTestCast.CastConfigId = castConfigId;
            M2C_TestCast m2CTestCast = await scene.GetComponent<ClientSenderComponent>().Call(c2MTestCast) as M2C_TestCast;
            return m2CTestCast.Error;
        }
    }
}