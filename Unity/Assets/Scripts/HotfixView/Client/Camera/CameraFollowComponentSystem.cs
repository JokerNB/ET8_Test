using System;
using Cinemachine;
using UnityEngine;

namespace ET.Client
{
    [FriendOf(typeof(CameraFollowComponent))]
    [EntitySystemOf(typeof(CameraFollowComponent))]
    public static partial class CameraFollowComponentSystem
    {
        [EntitySystem]
        private static void Awake(this ET.Client.CameraFollowComponent self)
        {
            self.MainCamera = Camera.main;
            self.CinemachineBrain = self.MainCamera.gameObject.AddComponent<CinemachineBrain>();
            self.CinemachineVirtualCamera = self.MainCamera.gameObject.AddComponent<CinemachineVirtualCamera>();
            self.CinemachineFramingTransposer = self.CinemachineVirtualCamera.AddCinemachineComponent<CinemachineFramingTransposer>();
            self.CinemachineFramingTransposer.m_CameraDistance = self.CameraDistance;

            Unit unit = UnitHelper.GetMyUnitFromCurrentScene(self.Root().CurrentScene());

            self.CinemachineVirtualCamera.Follow = unit.GetComponent<GameObjectComponent>().GameObject.transform;
            self.CinemachineVirtualCamera.LookAt = unit.GetComponent<GameObjectComponent>().GameObject.transform;
        }

        [EntitySystem]
        private static void Update(this ET.Client.CameraFollowComponent self)
        {
            if (Input.GetMouseButtonDown(1))
            {
                if (!UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject())
                    self.isEnableRotate = true;
            }

            if (Input.GetMouseButtonUp(1))
                self.isEnableRotate = false;
            if (self.isEnableRotate)
                self.RotateCameraView();
            self.ScrollCameraView();
        }

        [EntitySystem]
        private static void Destroy(this ET.Client.CameraFollowComponent self)
        {
            // GameObject.Destroy(self.CinemachineFramingTransposer);
            GameObject.Destroy(self.CinemachineVirtualCamera);
            GameObject.Destroy(self.CinemachineBrain);
            self.MainCamera = null;
        }

        public static void RotateCameraView(this CameraFollowComponent self)
        {
            float mouseX = Input.GetAxis("Mouse X") * 200;
            float mouseY = Input.GetAxis("Mouse Y") * 200;

            self.CinemachineTargetYaw += mouseX * Time.fixedDeltaTime;
            self.CinemachineTargetPitch -= mouseY * Time.fixedDeltaTime;

            self.CinemachineTargetYaw = self.ClampAngle(self.CinemachineTargetYaw, float.MinValue, float.MaxValue);
            self.CinemachineTargetPitch = self.ClampAngle(self.CinemachineTargetPitch, 1f, 80f);

            Quaternion targetRotation = Quaternion.Euler(self.CinemachineTargetPitch, self.CinemachineTargetYaw, 0);
            self.MainCamera.transform.rotation = targetRotation;
        }

        public static float ClampAngle(this CameraFollowComponent self, float angle, float min, float max)
        {
            if (angle < -360f)
                angle += 360f;
            if (angle > 360f)
                angle -= 360f;
            return Mathf.Clamp(angle, min, max);
        }

        public static void ScrollCameraView(this CameraFollowComponent self)
        {
            self.CameraDistance -= Input.GetAxis("Mouse ScrollWheel") * 5f;
            self.CameraDistance = Mathf.Clamp(self.CameraDistance, 5, 20);
            self.CinemachineFramingTransposer.m_CameraDistance =
                    Mathf.Lerp(self.CinemachineFramingTransposer.m_CameraDistance, self.CameraDistance, Time.deltaTime * 10f);
        }
    }
}