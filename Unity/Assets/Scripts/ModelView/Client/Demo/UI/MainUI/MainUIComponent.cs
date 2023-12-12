using UnityEngine;
using UnityEngine.UI;

namespace ET.Client;

[ComponentOf(typeof(UI))]
public class MainUIComponent : Entity,IAwake
{
    public Button Button_Back;
    public Button Button_Task;
    public Button Button_Talent;
    public Button Button_PersonalInformation;
    public Button Button_FirstCharge;
    public Button Button_SignIn;
    public Button Button_Chat;
    public Button Button_SocialContact;
    public Button Button_Setting;
    public Button Button_TopUp;
    public Button Button_Shop;
    public Button Button_Pass;
    public Button Button_Lottery;

}