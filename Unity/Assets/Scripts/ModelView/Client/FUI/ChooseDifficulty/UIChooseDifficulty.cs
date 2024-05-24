using ET.Client.ChooseDifficulty;

namespace ET.Client
{
	[ComponentOf(typeof(FUIEntity))]
	public class UIChooseDifficulty: Entity, IAwake
	{
		private FUI_UIChooseDifficulty _fuiUIChooseDifficulty;

		public FUI_UIChooseDifficulty FUIUIChooseDifficulty
		{
			get => _fuiUIChooseDifficulty ??= (FUI_UIChooseDifficulty)this.GetParent<FUIEntity>().GComponent;
		}

		public int ModelType = 0;
		public int ModelId = 0;
		public int ToMapConfigId = 0;
		public const int ModelConfigId = 1000;
		public const int NormalConfigId = 10000;
		public const int HappyConfigId = 20000;
	}
}
