using System;

namespace ET.Server
{
    [FriendOfAttribute(typeof(ET.Server.ReliveComponent))]
    public static class BattleHelper
    {
        /// <summary>
        /// 结算战斗
        /// 此处必须是同步的，不可改为异步，否则需求复杂之后很可能出问题
        /// 可以用协程，但不可把整个战斗计算改成异步
        /// </summary>
        /// <param name="attacker"></param>
        /// <param name="target"></param>
        /// <param name="actions"></param>
        public static void CalcAttack(Unit attacker, Unit target, Actions actions)
        {
            //这里应该是根据各个项目实际情况，攻击力，防御力之类的一堆公式计算，得出一个伤害值
            //TODO:现在简化为直接读取固定伤害
            long damage = long.Parse(actions.Config.Param[0]);

            NumericComponent numericComponent = target.GetComponent<NumericComponent>();
            long oldHp = numericComponent[NumericType.Hp];
            long tarHp = numericComponent[NumericType.Hp] + damage;
            numericComponent[NumericType.HpBase] = Math.Clamp(tarHp, 0, numericComponent[NumericType.MaxHp]);

            long newHp = numericComponent[NumericType.Hp];
            long res_damage = newHp - oldHp;

            //广播飘字
            if (res_damage != 0)
            {
                M2C_BattleResult m2CBattleResult = M2C_BattleResult.Create();
                m2CBattleResult.AttackerId = attacker.Id;
                m2CBattleResult.TargetId = target.Id;
                m2CBattleResult.Damage = res_damage;

                MMOMessageHelper.SendClient(target, m2CBattleResult, NoticeClientType.Broadcast);
            }

            if (oldHp > 0 && newHp == 0)
            {
                //处理死亡逻辑
                Kill(attacker, target);
            }
        }

        //击杀
        //负责击杀双方相关的逻辑
        public static void Kill(Unit killer, Unit killed)
        {
            //此处击杀者有很多处理，例如红名，pk值，记录到被杀的仇恨列表，击杀排行榜记录等等的需求
            OnDead(killed);
        }

        public static void OnDead(Unit killed)
        {
            var reliveComponent = killed.GetComponent<ReliveComponent>();
            if (reliveComponent == null)
                return;

            if (killed.IsAlive())
                return;

            killed.Stop(0);
            reliveComponent.Alive = false;

            switch (killed.Type())
            {
                case UnitType.Player:
                    //此处应有很多处理，死亡触发buff，触发被动等
                    break;
                case UnitType.Monster:
                    //怪物死了，3秒后自动消失MonsterDead
                    killed.Fiber().Root.GetComponent<TimerComponent>().NewOnceTimer(TimeInfo.Instance.ServerNow() + 3000, TimerInvokeType.MonsterDead, killed);
                    break;
                case UnitType.NPC:
                    break;
                case UnitType.Bullet:
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}