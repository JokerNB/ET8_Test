namespace ET.Client
{
    public struct SceneChangeStart
    {
        public int mapConfigId;
    }

    public struct SceneChangeFinish
    {
    }

    public struct AfterCreateClientScene
    {
    }

    public struct AfterCreateCurrentScene
    {
    }

    public struct AppStartInitFinish
    {
    }

    public struct LoginAccountFinish
    {
    }

    public struct LoginGameFinish
    {
    }

    public struct EnterMapFinish
    {
    }

    public struct AfterUnitCreate
    {
        public Unit Unit;
    }

    public struct AfterChooseModelDifficulty
    {
        public int MapConfigId;
    }

    public struct ChangeNickNameFinish
    {
    }
}