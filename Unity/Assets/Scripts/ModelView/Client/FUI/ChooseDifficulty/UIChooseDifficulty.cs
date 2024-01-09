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

		[StaticField]
		public static int ModelType { get; set; } = 0;
		public const int ModelConfigId = 1000;
		public const int NormalConfigId = 10000;
		public const int HappyConfigId = 20000;
	}
}
