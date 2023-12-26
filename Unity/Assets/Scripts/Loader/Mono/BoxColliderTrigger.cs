using System;
using UnityEngine;

namespace ET
{
    public enum TriggerType
    {
        ChooseDifficulty,
    }
    public class BoxColliderTrigger : MonoBehaviour
    {
        public delegate void OnTriggerEnterCall(TriggerType collider);

        public OnTriggerEnterCall onTriggerEnterCall;

        public TriggerType triggerType;

        private void OnTriggerEnter(Collider other)
        {
            if (other.tag == "Player")
            {
                this.onTriggerEnterCall?.Invoke(this.triggerType);
            }
        }
    }
}