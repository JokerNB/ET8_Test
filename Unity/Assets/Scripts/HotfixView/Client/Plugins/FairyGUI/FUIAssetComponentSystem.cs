using System.Collections.Generic;
using FairyGUI;
using FairyGUI.Dynamic;
using UnityEngine;

namespace ET.Client;

[EntitySystemOf(typeof (FUIAssetComponent))]
[FriendOf(typeof (FUIAssetComponent))]
public static partial class FUIAssetComponentSystem
{
    [EntitySystem]
    private static void Awake(this ET.Client.FUIAssetComponent self, bool unloadUnusedUIPackageImmediately)
    {
        self.UnloadUnusedUIPackageImmediately = unloadUnusedUIPackageImmediately;

        void LoadUIPackageHandler(string packageName, LoadUIPackageBytesCallback callback)
        {
            self.LoadUIPackageAsyncInner(packageName, callback).Coroutine();
        }

        void LoadTextureHandler(string packageName, string assetName, string extension, LoadTextureCallback callback)
        {
            self.LoadTextureAsyncInner(assetName, callback).Coroutine();
        }

        void LoadAudioClipHandler(string packageName, string assetName, string extension, LoadAudioClipCallback callback)
        {
            self.LoadAudioClipAsyncInner(assetName, callback).Coroutine();
        }

        void LoadUIPackageInner(string packageName, out byte[] bytes, out string assetNamePrefix)
        {
            bytes = new byte[1024];
            assetNamePrefix = string.Empty;
            self.LoadUIPackageAsyncInner(packageName,bytes,assetNamePrefix).Coroutine();
        }
        
        self.Locations = new Dictionary<int, string>();
        var assetLoader = new DelegateUIAssetLoader();
        assetLoader.LoadUIPackageBytesAsyncHandlerImpl = LoadUIPackageHandler;
        assetLoader.LoadUIPackageBytesHandlerImpl = LoadUIPackageInner;
        assetLoader.LoadTextureAsyncHandlerImpl = LoadTextureHandler;
        assetLoader.UnloadTextureHandlerImpl = self.UnloadAssetInner;
        assetLoader.LoadAudioClipAsyncHandlerImpl = LoadAudioClipHandler;
        assetLoader.UnloadAudioClipHandlerImpl = self.UnloadAssetInner;

        self.AssetLoader = assetLoader;

        self.GetMappingData().Coroutine();

        self.UIAssetManager = new UIAssetManager();
        self.UIAssetManager.Initialize(self);
    }

    public static async ETTask GetMappingData(this FUIAssetComponent self)
    {
        var mappingData = await self.Root().GetComponent<ResourcesLoaderComponent>().LoadRawFileDataSync("Assets/Bundles/FUI/UIPackageMapping");
        self.PackageHelper = new UIPackageMapping(mappingData);
    }

    public static ETTask<GObject> CreateObjectFromURLAsync(this FUIAssetComponent self, string url)
    {
        ETTask<GObject> task = ETTask<GObject>.Create(true);
        UIPackage.CreateObjectFromURL(url);
        return task;
    }

    public static ETTask<GObject> CreateObjectAsync(this FUIAssetComponent self, string pkgName, string resName)
    {
        ETTask<GObject> task = ETTask<GObject>.Create(true);
        UIPackage.CreateObjectAsync(pkgName, resName, result => { task.SetResult(result); });
        return task;
    }

    public static GObject CreateObject(this FUIAssetComponent self, string pkgName, string resName)
    {
        return UIPackage.CreateObject(pkgName, resName);
    }

    [EntitySystem]
    private static void Destroy(this ET.Client.FUIAssetComponent self)
    {
    }

    private static async ETTask LoadUIPackageAsyncInner(this FUIAssetComponent self, string packageName, byte[] bytes, string assetNamePrefix)
    {
        ResourcesLoaderComponent resourcesLoaderComponent = self.Root().GetComponent<ResourcesLoaderComponent>();
        string location = "{0}{1}".Fmt(packageName, "_fui");
        byte[] descData = await resourcesLoaderComponent.LoadRawFileDataSync($"{self.FUIPath}/{packageName}/{location}");
        // resourcesLoaderComponent.UnloadAsset(location);

        bytes = descData;
        assetNamePrefix = packageName;
    }

    private static async ETTask LoadUIPackageAsyncInner(this FUIAssetComponent self, string packageName, LoadUIPackageBytesCallback callback)
    {
        ResourcesLoaderComponent resourcesLoaderComponent = self.Root().GetComponent<ResourcesLoaderComponent>();
        string location = "{0}{1}".Fmt(packageName, "_fui");
        byte[] descData = await resourcesLoaderComponent.LoadRawFileDataSync($"{self.FUIPath}/{packageName}/{location}");
        // ResComponent.Instance.UnloadAsset(location);

        callback(descData, packageName);
    }

    private static async ETTask LoadTextureAsyncInner(this FUIAssetComponent self, string assetName, LoadTextureCallback callback)
    {
        ResourcesLoaderComponent resourcesLoaderComponent = self.Root().GetComponent<ResourcesLoaderComponent>();
        Texture res = await resourcesLoaderComponent.LoadAssetAsync<Texture>(assetName);

        if (res != null)
            self.Locations[res.GetInstanceID()] = assetName;

        callback(res);
    }

    private static async ETTask LoadAudioClipAsyncInner(this FUIAssetComponent self, string assetName, LoadAudioClipCallback callback)
    {
        ResourcesLoaderComponent resourcesLoaderComponent = self.Root().GetComponent<ResourcesLoaderComponent>();
        AudioClip res = await resourcesLoaderComponent.LoadAssetAsync<AudioClip>(assetName);

        if (res != null)
            self.Locations[res.GetInstanceID()] = assetName;

        callback(res);
    }

    private static void UnloadAssetInner(this FUIAssetComponent self, UnityEngine.Object obj)
    {
        if (obj == null)
            return;

        int instanceId = obj.GetInstanceID();
        if (!self.Locations.TryGetValue(instanceId, out string location))
            return;

        self.Locations.Remove(instanceId);
        // ResourcesLoaderComponent resourcesLoaderComponent = self.Root().GetComponent<ResourcesLoaderComponent>();
        //
        // if (resourcesLoaderComponent != null && !resourcesLoaderComponent.IsDisposed)
        // {
        //     ResComponent.Instance.UnloadAsset(location);
        // }
    }
}