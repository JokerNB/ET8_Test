namespace ET.Client
{
	[MessageHandler(SceneType.Demo)]
	public class M2C_CreateMyUnitHandler: MessageHandler<Scene, M2C_CreateMyUnit>
	{
		protected override async ETTask Run(Scene root, M2C_CreateMyUnit message)
		{
			// 通知场景切换协程继续往下走
			root.GetComponent<ObjectWait>().Notify(new Wait_CreateMyUnit() {Message = message});
			var currentScene = root.Root().CurrentScene();
			var unitComponent = currentScene.GetComponent<UnitComponent>();
			if (unitComponent == null)
				unitComponent = currentScene.AddComponent<UnitComponent>();
			Unit unit = UnitFactory.Create(currentScene, message.Unit);
			unitComponent.Add(unit);
			await ETTask.CompletedTask;
		}
	}
}
