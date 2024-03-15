/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.LoadingPanel
{
	[EnableClass]
	public partial class FUI_UILoadingPanel_Progress: GComponent
	{
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress1;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress2;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress3;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress4;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress5;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress6;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress7;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress8;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress9;
		public ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem Progress10;
		public const string URL = "ui://gjwdnji0dauk8";

		public static FUI_UILoadingPanel_Progress CreateInstance()
		{
			return (FUI_UILoadingPanel_Progress)UIPackage.CreateObject("LoadingPanel", "UILoadingPanel_Progress");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			Progress1 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(0);
			Progress2 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(1);
			Progress3 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(2);
			Progress4 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(3);
			Progress5 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(4);
			Progress6 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(5);
			Progress7 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(6);
			Progress8 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(7);
			Progress9 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(8);
			Progress10 = (ET.Client.LoadingPanel.FUI_UILoadingPanel_ProgressItem)GetChildAt(9);
		}
	}
}
