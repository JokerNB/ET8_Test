using UnityEngine;

namespace ET;

[ComponentOf(typeof(Scene))]
public class LocalizeComponent: Entity, IAwake
{
    public SystemLanguage CurrentLanguage { get; set; }
}