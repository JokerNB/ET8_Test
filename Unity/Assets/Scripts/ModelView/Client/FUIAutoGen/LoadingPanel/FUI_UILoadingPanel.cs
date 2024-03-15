/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.LoadingPanel
{
	[EnableClass]
	public partial class FUI_UILoadingPanel: GComponent
	{
		public Controller BG;
		public Transition LoadingAni;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_Progress UILoadingPanel_Progress;
		public const string URL = "ui://gjwdnji0dauk6";

		public static FUI_UILoadingPanel CreateInstance()
		{
			return (FUI_UILoadingPanel)UIPackage.CreateObject("LoadingPanel", "UILoadingPanel");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			BG = GetControllerAt(0);
			LoadingAni = GetTransitionAt(0);
			UILoadingPanel_Progress = (ET.Client.LoadingPanel.FUI_UILoadingPanel_Progress)GetChildAt(5);
		}
	}
}
