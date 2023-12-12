namespace ET.Client;

[Event(SceneType.Demo)]
public class EnterMapFinish_CreateMainUI : AEvent<Scene,EnterMapFinish>
{
    protected override async ETTask Run(Scene scene, EnterMapFinish a)
    {
        await UIHelper.Create(scene, UIType.MainUI, UILayer.High);
    }
}