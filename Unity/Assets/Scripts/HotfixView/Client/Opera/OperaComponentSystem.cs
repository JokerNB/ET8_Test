using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(OperaComponent))]
    [FriendOf(typeof(OperaComponent))]
    public static partial class OperaComponentSystem
    {
        [EntitySystem]
        private static void Awake(this OperaComponent self)
        {
            self.mapMask = LayerMask.GetMask("Map");
        }

        [EntitySystem]
        private static void Update(this OperaComponent self)
        {
            if (Input.GetMouseButtonDown(0))
            {
                self.OnClickMouse0().Coroutine();
            }

            if (Input.GetKeyDown(KeyCode.Q))
            {
                self.Test1().Coroutine();
            }

            if (Input.GetKeyDown(KeyCode.W))
            {
                self.Test2().Coroutine();
            }

            if (Input.GetKeyDown(KeyCode.R))
            {
                CodeLoader.Instance.Reload();
                return;
            }

            if (Input.GetKeyDown(KeyCode.T))
            {
                C2M_TransferMap c2MTransferMap = C2M_TransferMap.Create();
                self.Root().GetComponent<ClientSenderComponent>().Call(c2MTransferMap).Coroutine();
            }

            if (Input.GetKeyDown(KeyCode.Alpha1))
            {
                Log.Error("释放技能");
                ClientCastHelper.CastSkill(self.Root(),1).Coroutine();
            }
        }

        private static async ETTask Test1(this OperaComponent self)
        {
            Log.Debug($"Croutine 1 start1 ");
            using (await self.Root().GetComponent<CoroutineLockComponent>().Wait(1, 20000, 3000))
            {
                await self.Root().GetComponent<TimerComponent>().WaitAsync(6000);
            }

            Log.Debug($"Croutine 1 end1");
        }

        private static async ETTask Test2(this OperaComponent self)
        {
            Log.Debug($"Croutine 2 start2");
            using (await self.Root().GetComponent<CoroutineLockComponent>().Wait(1, 20000, 3000))
            {
                await self.Root().GetComponent<TimerComponent>().WaitAsync(1000);
            }
            Log.Debug($"Croutine 2 end2");
        }

        private static async ETTask OnClickMouse0(this OperaComponent self)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 1000, self.mapMask))
            {
                C2M_PathfindingResult c2MPathfindingResult = C2M_PathfindingResult.Create();
                c2MPathfindingResult.Position = hit.point;
                // var gameObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
                // gameObject.transform.position = hit.point;
                self.Root().GetComponent<ClientSenderComponent>().Send(c2MPathfindingResult);
                // await self.Root().GetComponent<TimerComponent>().WaitAsync(10000);
                // GameObject.DestroyImmediate(gameObject);
            }
            await ETTask.CompletedTask;
        }

    }
}