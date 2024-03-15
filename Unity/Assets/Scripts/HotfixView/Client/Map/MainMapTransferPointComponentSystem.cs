using UnityEngine;

namespace ET.Client
{
    [EntitySystemOf(typeof(MainMapTransferPointComponent))]
    [FriendOf(typeof(MainMapTransferPointComponent))]
    public static partial class MainMapTransferPointComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.MainMapTransferPointComponent self)
        {
            var boxColliderTriggers = GameObject.FindObjectsByType<BoxColliderTrigger>(FindObjectsSortMode.InstanceID);
            if(boxColliderTriggers == null || boxColliderTriggers.Length == 0)
                Log.Error("BoxColliderTrigger is NULL!!!!");
            foreach (BoxColliderTrigger colliderTrigger in boxColliderTriggers)
            {
                if (colliderTrigger.triggerType == TriggerType.ChooseDifficulty)
                {
                    self.TransferPont_ChooseDifficulty = colliderTrigger;
                    self.TransferPont_ChooseDifficulty.onTriggerEnterCall += collider =>
                    {
                        OnTriggerChooseDifficulty(self).Coroutine();
                    };
                }
            }
        }

        public static async ETTask OnTriggerChooseDifficulty(MainMapTransferPointComponent self)
        {
            await self.Root().GetComponent<FUIComponent>().ShowPanelAsync(PanelId.UIChooseDifficulty);
        }
    }
}