using System.Collections.Generic;


namespace ET.Server
{
	public static partial class RealmGateAddressHelper
	{
		public static StartSceneConfig GetGate(int zone, string account)
		{
			ulong hash = (ulong)account.GetLongHashCode();
			
			List<StartSceneConfig> zoneGates = StartSceneConfigCategory.Instance.Gates[zone];
			if (zoneGates == null || zoneGates.Count == 0)
				return null;
			
			return zoneGates[(int)(hash % (ulong)zoneGates.Count)];
		}
	}
}
