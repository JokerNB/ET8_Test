namespace ET.Server
{
    [EntitySystemOf(typeof(SkillStatusComponent))]
    [FriendOfAttribute(typeof(ET.Server.SkillStatusComponent))]
    [FriendOfAttribute(typeof(ET.Server.Cast))]
    public static partial class SkillStatusComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Server.SkillStatusComponent self)
        {
        }

        [EntitySystem]
        private static void Destroy(this ET.Server.SkillStatusComponent self)
        {
            self.ClearCurSkillInfo();

            self.CoolDowns.Clear();
        }

        public static int CanCastSkill(this SkillStatusComponent self, int castConfigId)
        {
            Unit unit = self.GetParent<Unit>();
            if (unit == null)
                return ErrorCode.ERR_Cast_UnitIsNull;
            NumericComponent numericComponent = unit.GetComponent<NumericComponent>();
            if (numericComponent == null)
                return ErrorCode.ERR_Cast_NumIsNull;
            if (numericComponent[NumericType.ForbidSkill] > 0)
                return ErrorCode.ERR_Cast_ForbidSkill;
            if (self.CoolDowns.TryGetValue(castConfigId, out long tarTime))
            {
                if (TimeInfo.Instance.ServerNow() <= tarTime)
                    return ErrorCode.ERR_Cast_FSkillCDDown;
            }

            return ErrorCode.ERR_Success;
        }

        public static bool StartSkill(this SkillStatusComponent self, Cast cast)
        {
            if (self.CanCastSkill(cast.ConfigId) != ErrorCode.ERR_Success)
                return false;

            int castConfigId = cast.ConfigId;
            if (cast.Config.StatusSkill == 0)
                return true;

            long now = TimeInfo.Instance.ServerNow();
            self.CurSkillcastID = castConfigId;
            self.CurSkillCastInstanceId = cast.InstanceId;
            self.CurSkillStartTime = now;
            self.CurSkillStatus = SkillStatusType.Init;

            int coolDown = CastConfigCategory.Instance.Get(castConfigId).CoolDown;

            if (coolDown > 0)
            {
                self.CoolDowns[castConfigId] = now + coolDown;
                Unit unit = self.GetParent<Unit>();

                M2C_CoolDownChange m2CCoolDownChange = M2C_CoolDownChange.Create();
                m2CCoolDownChange.CastConfigIds.Add(castConfigId);
                m2CCoolDownChange.CoolDownTimes.Add(self.CoolDowns[castConfigId]);
                m2CCoolDownChange.CoolDownTimes.Add(now);
                MMOMessageHelper.SendClient(unit, m2CCoolDownChange, NoticeClientType.Self);
            }

            return true;
        }

        public static bool RunningSkill(this SkillStatusComponent self, Cast cast)
        {
            if (cast.Config.StatusSkill == 0)
                return true;
            if (self.CurSkillStatus != SkillStatusType.Init || self.CurSkillCastInstanceId != cast.InstanceId)
                return false;

            self.CurSkillStatus = SkillStatusType.Running;
            return true;
        }

        public static bool FinishSkill(this SkillStatusComponent self, Cast cast)
        {
            if (cast.Config.StatusSkill == 0)
                return true;
            if (self.CurSkillStatus != SkillStatusType.Running || self.CurSkillCastInstanceId != cast.InstanceId)
                return false;

            self.CurSkillStatus = SkillStatusType.Finish;
            return true;
        }

        public static bool BreakSkill(this SkillStatusComponent self)
        {
            //这里可以加一些不可打断的判断，例如某些技能就是无法被打断的，或者玩家在某个状态下霸体了，不会被打断技能
            self.ClearCurSkillInfo();
            return true;
        }

        public static void ClearCurSkillInfo(this SkillStatusComponent self)
        {
            self.CurSkillCastInstanceId = default;
            self.CurSkillcastID = default;
            self.CurSkillStartTime = default;
            self.CurSkillStatus = SkillStatusType.New;
        }
    }
}