namespace ET
{
    [EntitySystemOf(typeof(RoleInfo))]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    public static partial class RoleInfoSystem
    {
        [EntitySystem]
        private static void Awake(this ET.RoleInfo self)
        {

        }

        public static void FromMessage(this RoleInfo self, RolesInfoProto rolesInfoProto)
        {
            self.UnitConfigId = rolesInfoProto.UnitConfigId;
            self.Proficiency = rolesInfoProto.Proficiency;
            self.Level = rolesInfoProto.Level;
            self.IsUnlock = rolesInfoProto.IsUnlock;
        }

        public static RolesInfoProto ToMessage(this RoleInfo self)
        {
            RolesInfoProto rolesInfoProto = RolesInfoProto.Create();
            rolesInfoProto.UnitConfigId = self.UnitConfigId;
            rolesInfoProto.Proficiency = self.Proficiency;
            rolesInfoProto.Level = self.Level;
            rolesInfoProto.IsUnlock = self.IsUnlock;
            return rolesInfoProto;
        }
    }
}