/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.LoadingPanel
{
	public partial class FUI_UILoadingPanel_ProgressItem: GComponent
	{
		public Controller State;
		public const string URL = "ui://gjwdnji0dauk7";

		public static FUI_UILoadingPanel_ProgressItem CreateInstance()
		{
			return (FUI_UILoadingPanel_ProgressItem)UIPackage.CreateObject("LoadingPanel", "UILoadingPanel_ProgressItem");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			State = GetControllerAt(0);
		}
	}
}
