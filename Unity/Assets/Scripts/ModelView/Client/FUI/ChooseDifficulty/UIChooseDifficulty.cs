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
	}
}
