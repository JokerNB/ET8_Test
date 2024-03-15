
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using Luban;
using System.Collections.Generic;

namespace ET
{
    [Config]
    public partial class HeroCategory : Singleton<HeroCategory>
    {
        private readonly Dictionary<int, HeroConfig> _dataMap;
        private readonly List<HeroConfig> _dataList;

        public HeroCategory(ByteBuf _buf)
        {
            _dataMap = new Dictionary<int, HeroConfig>();
            _dataList = new List<HeroConfig>();

            for (int n = _buf.ReadSize(); n > 0; --n)
            {
                HeroConfig _v;
                _v = HeroConfig.DeserializeHeroConfig(_buf);
                _dataList.Add(_v);
                _dataMap.Add(_v.Id, _v);
            }

            PostInit();
        }

        public Dictionary<int, HeroConfig> DataMap => _dataMap;
        public List<HeroConfig> DataList => _dataList;

        public HeroConfig GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
        public HeroConfig Get(int key) => _dataMap[key];
        public HeroConfig this[int key] => _dataMap[key];

        partial void PostInit();
    }
}
