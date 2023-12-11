using System.Text.RegularExpressions;
using ET;

namespace ET;

[EntitySystemOf(typeof(CheckRegexMatchComponent))]
public static partial class CheckRegexMatchComponentSystem
{
    public static bool isMatchAccount(this CheckRegexMatchComponent self, string str)
    {
        string pattern = @"\b\w{4,8}(?<!-_)\b";
        Regex regex = new(pattern);
        return regex.IsMatch(str);
    }

    public static bool isMatchPassword(this CheckRegexMatchComponent self, string str)
    {
        string pattern = @"\b\w{6,12}(?<!-_)\b";
        Regex regex = new(pattern);
        return regex.IsMatch(str);
    }
    [EntitySystem]
    private static void Awake(this ET.CheckRegexMatchComponent self)
    {

    }
}