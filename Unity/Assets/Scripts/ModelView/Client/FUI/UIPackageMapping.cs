using System.Collections.Generic;
using FairyGUI.Dynamic;
using Luban;

namespace ET.Client
{
    [EnableClass]
    public sealed class UIPackageMapping : IUIPackageHelper
    {
        private readonly Dictionary<string, string> m_PackageIdToNameMap;

        public UIPackageMapping(byte[] mappingData)
        {
            ByteBuf br = new ByteBuf(mappingData);
            int count = br.ReadInt();

            Dictionary<string, string> mappingDict = new Dictionary<string, string>(count);
            for (int i = 0; i < count; i++)
            {
                mappingDict.Add(br.ReadString(), br.ReadString());
            }
            
            m_PackageIdToNameMap = mappingDict;
        }
        
        public string GetPackageNameById(string id)
        {
            return m_PackageIdToNameMap.TryGetValue(id, out var packageName) ? packageName : null;
        }
    }
}