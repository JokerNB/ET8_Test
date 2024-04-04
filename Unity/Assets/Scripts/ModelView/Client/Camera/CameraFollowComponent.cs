using Cinemachine;
using UnityEngine;

namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class CameraFollowComponent : Entity, IAwake, IUpdate, IDestroy
    {
        public Camera MainCamera;
        public CinemachineBrain CinemachineBrain;
        public CinemachineVirtualCamera CinemachineVirtualCamera;
        public CinemachineFramingTransposer CinemachineFramingTransposer;
        public float CameraDistance = 10;
        public float CinemachineTargetYaw;
        public float CinemachineTargetPitch;
        public bool isEnableRotate = false;
    }
}