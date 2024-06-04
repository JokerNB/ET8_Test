using ET.Client.ChooseGameRole;
using FairyGUI;

namespace ET.Client
{
    [FriendOf(typeof(UIChooseGameRole))]
    [FriendOfAttribute(typeof(ET.Client.RolesInfoComponent))]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    public static class UIChooseGameRoleSystem
    {
        public static void Awake(this UIChooseGameRole self)
        {
        }

        public static void RegisterUIEvent(this UIChooseGameRole self)
        {
        }

        public static void OnShow(this UIChooseGameRole self, Entity contextData = null)
        {
            self.FUIUIChooseGameRole.GameRoleList.itemRenderer = self.ItemRenderer;
            self.FUIUIChooseGameRole.GameRoleList.numItems = self.Root().GetComponent<RolesInfoComponent>().ShowRolesInfo.Count;
            self.FUIUIChooseGameRole.GameRoleList.onClickItem.Add(self.OnClickItem);
        }

        private static void ItemRenderer(this UIChooseGameRole self, int index, GObject item)
        {
            RoleInfo roleInfo = self.Root().GetComponent<RolesInfoComponent>().ShowRolesInfo[index];
            var uiGameRoleItem = item as FUI_UIGameRoleItem;
            uiGameRoleItem.ID.text = roleInfo.UnitConfigId.ToString();
            uiGameRoleItem.Name.text = HeroConfigCategory.Instance.Get(UnitConfigCategory.Instance.Get(roleInfo.UnitConfigId).PropertyConfigId).HeroName.ToString();
            uiGameRoleItem.UseType.selectedIndex = roleInfo.IsTemporaryUnlock;
        }

        public static void OnHide(this UIChooseGameRole self)
        {
        }

        public static void BeforeUnload(this UIChooseGameRole self)
        {
        }

        public static void OnClickItem(this UIChooseGameRole self, EventContext context)
        {
            //选择使用哪个角色进行游戏
            var index = self.FUIUIChooseGameRole.GameRoleList.GetChildIndex(context.data as GObject);
            RoleInfo roleInfo = self.Root().GetComponent<RolesInfoComponent>().ShowRolesInfo[index];
            if(roleInfo.IsTemporaryUnlock == 0)
                return;
            C2G_ChooseGameRole c2GChooseGameRole = C2G_ChooseGameRole.Create();
            c2GChooseGameRole.UnitConfigId = roleInfo.UnitConfigId;
            c2GChooseGameRole.PlayerId = self.Root().GetComponent<PlayerComponent>().MyId;
            self.Root().GetComponent<ClientSenderComponent>().Send(c2GChooseGameRole);
        }
    }
}