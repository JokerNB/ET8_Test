/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.ChooseDifficulty
{
	[EnableClass]
	public partial class FUI_UIChooseDifficulty: GComponent
	{
		public enum c1Page
		{
			Model,
			Difficulty,
		}

		public Controller c1;
		public GList List_Model;
		public GList List_Difficulty;
		public const string URL = "ui://59f6nlxfkoj00";

		public static FUI_UIChooseDifficulty CreateInstance()
		{
			return (FUI_UIChooseDifficulty)UIPackage.CreateObject("ChooseDifficulty", "UIChooseDifficulty");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			c1 = GetControllerAt(0);
			List_Model = (GList)GetChildAt(0);
			List_Difficulty = (GList)GetChildAt(1);
		}
	}
}
