/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.RegisterPanel
{
	public partial class FUI_UIRegister: GComponent
	{
		public GLoader3D GLoad_1;
		public GLoader3D GLoad_2;
		public GTextInput Input;
		public ET.Client.RegisterPanel.FUI_Button_ChooseName Button_ChooseName;
		public ET.Client.RegisterPanel.FUI_Button_EntryGame Button_EntryGame;
		public const string URL = "ui://1ohm0ryslxtc0";

		public static FUI_UIRegister CreateInstance()
		{
			return (FUI_UIRegister)UIPackage.CreateObject("RegisterPanel", "UIRegister");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			GLoad_1 = (GLoader3D)GetChildAt(0);
			GLoad_2 = (GLoader3D)GetChildAt(1);
			Input = (GTextInput)GetChildAt(3);
			Button_ChooseName = (ET.Client.RegisterPanel.FUI_Button_ChooseName)GetChildAt(4);
			Button_EntryGame = (ET.Client.RegisterPanel.FUI_Button_EntryGame)GetChildAt(6);
		}
	}
}
