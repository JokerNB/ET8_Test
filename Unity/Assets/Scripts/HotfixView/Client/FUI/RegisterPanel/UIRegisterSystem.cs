using Spine.Unity;
using UnityEngine;

namespace ET.Client
{
    [FriendOf(typeof (UIRegister))]
    public static class UIRegisterSystem
    {
        public static void Awake(this UIRegister self)
        {
        }

        public static void RegisterUIEvent(this UIRegister self)
        {
            self.FUIUIRegister.Button_ChooseName.AddListner(() => ChooseRandomNickName(self));
            self.FUIUIRegister.Button_EntryGame.AddListner(() =>
            {
                EntryGame(self).Coroutine();
            });
        }

        public static void OnShow(this UIRegister self, Entity contextData = null)
        {
            SetLoader1(self).Coroutine();
            SetLoader2(self).Coroutine();
        }

        public static void OnHide(this UIRegister self)
        {
        }

        public static void BeforeUnload(this UIRegister self)
        {
        }

        public static void ChooseRandomNickName(UIRegister self)
        {
            var configs = RandomNameCategory.Instance.GetAll();
            var count = configs.Count;
            var key = RandomGenerator.RandomNumber(1, count);
            var randomName = configs[key];
            var currentLanguage = self.Root().GetComponent<LocalizeComponent>().CurrentLanguage;
            if (currentLanguage == SystemLanguage.Chinese || currentLanguage == SystemLanguage.ChineseSimplified ||
                currentLanguage == SystemLanguage.ChineseTraditional)
                self.FUIUIRegister.Input.text = randomName.NameCN;
            else
            {
                self.FUIUIRegister.Input.text = randomName.NameEN;
            }
        }

        public static async ETTask SetLoader1(UIRegister self)
        {
            var skeletonDataAsset = await self.Root().GetComponent<ResourcesLoaderComponent>()
                    .LoadAssetAsync<SkeletonDataAsset>("Assets/Bundles/Spine/spineboy-pro/spineboy-pro_SkeletonData");
            self.FUIUIRegister.GLoad_1.SetSpine(skeletonDataAsset, 546, 571, new Vector2(546/2f,571f), false);
            self.FUIUIRegister.GLoad_1.spineAnimation.AnimationName = "idle";
            self.FUIUIRegister.GLoad_1.spineAnimation.loop = true;
            self.FUIUIRegister.GLoad_1.spineAnimation.Initialize(true);
        }

        public static async ETTask SetLoader2(UIRegister self)
        {
            var skeletonDataAsset = await self.Root().GetComponent<ResourcesLoaderComponent>()
                    .LoadAssetAsync<SkeletonDataAsset>("Assets/Bundles/Spine/Spineunitygirl/Doi_SkeletonData");
            self.FUIUIRegister.GLoad_2.SetSpine(skeletonDataAsset, 546, 571, new Vector2(546/2f,571f), false);
            self.FUIUIRegister.GLoad_2.spineAnimation.AnimationName = "main";
            self.FUIUIRegister.GLoad_2.spineAnimation.loop = true;
            self.FUIUIRegister.GLoad_2.spineAnimation.Initialize(true);
        }

        public static async ETTask EntryGame(UIRegister self)
        {
            string newNickName = self.FUIUIRegister.Input.text;
            string Account = self.Root().GetComponent<PlayerComponent>().Account;
            G2C_ChangeNickName g2CChangeNickName = await self.Root().GetComponent<ClientSenderCompnent>().Call(new C2G_ChangeNickName() { NewNickName = newNickName,Account = Account}) as G2C_ChangeNickName;
            if(g2CChangeNickName.Error != ErrorCode.ERR_Success)
                return;
            self.Root().GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UILobby).Coroutine();
            self.Root().GetComponent<FUIComponent>().ClosePanel(PanelId.UIRegister);
        }
    }
}