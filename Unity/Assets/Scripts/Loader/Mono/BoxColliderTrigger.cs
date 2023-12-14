using UnityEngine;

namespace ET
{
    public class BoxColliderTrigger : MonoBehaviour
    {
        private void OnTriggerEnter(Collider other)
        {
            if (other.tag == "Player")
            {
                
            }
        }
    }
}