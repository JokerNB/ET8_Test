/** This is an automatically generated class by FUICodeSpawner. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace ET.Client.MainPanel
{
	[EnableClass]
	public partial class FUI_UIMainPanel: GComponent
	{
		public ET.Client.MainPanel.FUI_Button_Back Button_Back;
		public ET.Client.MainPanel.FUI_Button_Lottery Button_Lottery;
		public ET.Client.MainPanel.FUI_Button_Pass Button_Pass;
		public ET.Client.MainPanel.FUI_Button_Shop Button_Shop;
		public ET.Client.MainPanel.FUI_Button_TopUp Button_TopUp;
		public ET.Client.MainPanel.FUI_Button_Setting Button_Setting;
		public ET.Client.MainPanel.FUI_Button_SocialContact Button_SocialContact;
		public ET.Client.MainPanel.FUI_Button_Chat Button_Chat;
		public ET.Client.MainPanel.FUI_Button_SignIn Button_SignIn;
		public ET.Client.MainPanel.FUI_Button_FirstCharge Button_FirstCharge;
		public ET.Client.MainPanel.FUI_Button_PersonalInformation Button_PersonalInformation;
		public ET.Client.MainPanel.FUI_Button_Talent Button_Talent;
		public ET.Client.MainPanel.FUI_Button_Task Button_Task;
		public const string URL = "ui://512337h5koj00";

		public static FUI_UIMainPanel CreateInstance()
		{
			return (FUI_UIMainPanel)UIPackage.CreateObject("MainPanel", "UIMainPanel");
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			Button_Back = (ET.Client.MainPanel.FUI_Button_Back)GetChildAt(0);
			Button_Lottery = (ET.Client.MainPanel.FUI_Button_Lottery)GetChildAt(1);
			Button_Pass = (ET.Client.MainPanel.FUI_Button_Pass)GetChildAt(2);
			Button_Shop = (ET.Client.MainPanel.FUI_Button_Shop)GetChildAt(3);
			Button_TopUp = (ET.Client.MainPanel.FUI_Button_TopUp)GetChildAt(4);
			Button_Setting = (ET.Client.MainPanel.FUI_Button_Setting)GetChildAt(5);
			Button_SocialContact = (ET.Client.MainPanel.FUI_Button_SocialContact)GetChildAt(6);
			Button_Chat = (ET.Client.MainPanel.FUI_Button_Chat)GetChildAt(7);
			Button_SignIn = (ET.Client.MainPanel.FUI_Button_SignIn)GetChildAt(8);
			Button_FirstCharge = (ET.Client.MainPanel.FUI_Button_FirstCharge)GetChildAt(9);
			Button_PersonalInformation = (ET.Client.MainPanel.FUI_Button_PersonalInformation)GetChildAt(10);
			Button_Talent = (ET.Client.MainPanel.FUI_Button_Talent)GetChildAt(11);
			Button_Task = (ET.Client.MainPanel.FUI_Button_Task)GetChildAt(12);
		}
	}
}
