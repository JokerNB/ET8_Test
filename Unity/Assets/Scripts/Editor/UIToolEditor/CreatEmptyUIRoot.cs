using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class CreatEmptyUIRoot
{
    [MenuItem("GameObject/UI/CreatEmptyUIRoot",false,10)]
    public static void CreatEmptyUIBySelectUI(MenuCommand menuCommand)
    {
        GameObject go = new("UI");
        var rectTransform = go.AddComponent<RectTransform>();
        var canvas = go.AddComponent<Canvas>();
        var graphicRaycaster = go.AddComponent<GraphicRaycaster>();
        var referenceCollector = go.AddComponent<ReferenceCollector>();
        var parent = menuCommand.context as GameObject;
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(1, 1);
        rectTransform.offsetMin = Vector2.zero;
        rectTransform.offsetMax = Vector2.zero;
        GameObjectUtility.SetParentAndAlign(go,menuCommand.context as GameObject);
        Undo.RegisterCreatedObjectUndo(go,"Create" + go.name);
        Selection.activeObject = go;
        Debug.LogError(1);
    }
}