namespace ET
{
    [ChildOf]
    public class RoleInfo : Entity, IAwake
    {
        public int UnitConfigId = default;
        public int Proficiency = default;
        public int Level = default;
        public int IsUnlock = default;
        public int IsAlreadyOwned = default;
    }
}