namespace ET.Server
{
    public static class DisconnectHelper
    {
        public static async ETTask Diconnect(this Session self)
        {
            if (self == null || self.IsDisposed)
                return;
            var instanceId = self.InstanceId;
            TimerComponent timerComponent = self.Root().GetComponent<TimerComponent>();
            await timerComponent.WaitAsync(1000);
            if (self.InstanceId != instanceId)
                return;
            self.Dispose();
        }
    }
}