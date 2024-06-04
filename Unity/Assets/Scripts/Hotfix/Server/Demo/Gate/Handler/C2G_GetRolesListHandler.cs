using System.Collections.Generic;

namespace ET.Server
{
    [MessageSessionHandler(SceneType.Gate)]
    [FriendOfAttribute(typeof(ET.RoleInfo))]
    [FriendOfAttribute(typeof(ET.Server.RolesInfoManagerComponent))]
    public class C2G_GetRolesListHandler : MessageSessionHandler<C2G_GetRolesList, G2C_GetRolesList>
    {
        protected override async ETTask Run(Session session, C2G_GetRolesList request, G2C_GetRolesList response)
        {
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

                    session.Root().GetComponent<RolesInfoManagerComponent>().Add(roleInfosList);
                    List<RolesInfoProto> rolesInfoProtos = new List<RolesInfoProto>();
                    foreach (RoleInfo info in session.Root().GetComponent<RolesInfoManagerComponent>().RolesInfos.Values)
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