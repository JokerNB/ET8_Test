using System.Collections.Generic;

namespace ET.Server
{
    [MessageSessionHandler(SceneType.Realm)]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    public class C2R_GetRolesListHandler : MessageSessionHandler<C2R_GetRolesList, R2C_GetRolesList>
    {
        protected override async ETTask Run(Session session, C2R_GetRolesList request, R2C_GetRolesList response)
        {
            string token = session.Root().GetComponent<TokenComponent>().Get(request.Account);
            if (token == null || token != request.Token)
            {
                response.Error = ErrorCode.ERR_TokenError;
                session?.Disconnect().Coroutine();
                return;
            }

            CoroutineLockComponent coroutineLockComponent = session.Root().GetComponent<CoroutineLockComponent>();
            using (session.AddComponent<SessionLockingComponent>())
            {
                using (await coroutineLockComponent.Wait(CoroutineLockType.GetRolesInfo, request.Account.GetLongHashCode()))
                {
                    RoleInfo roleInfo = null;
                    List<RoleInfo> roleInfosList = new List<RoleInfo>();
                    //读取数据库查看角色数据
                    var dbComponent = session.Root().GetComponent<DBManagerComponent>().GetZoneDB(session.Zone());
                    foreach (HeroConfig heroConfig in HeroConfigCategory.Instance.DataList)
                    {
                        var roleInfos = await dbComponent.Query<RoleInfo>(info => heroConfig.Id == info.UnitConfigId);
                        if (roleInfos != null && roleInfos.Count > 0)
                        {
                            roleInfo = roleInfos[0];
                            roleInfosList.Add(roleInfo);
                        }
                    }

                    session.Root().GetComponent<RolesInfoManagerComponent>().UpdateData(roleInfosList);
                    var list = session.Root().GetComponent<RolesInfoManagerComponent>().GetCanUseRoles();
                    List<RolesInfoProto> rolesInfoProtos = new List<RolesInfoProto>();
                    foreach (RoleInfo info in list)
                    {
                        RolesInfoProto infoProto = info.ToMessage();
                        rolesInfoProtos.Add(infoProto);
                    }

                    response.RolesInfosList = rolesInfoProtos;
                }
            }


            await ETTask.CompletedTask;
        }
    }
}