using FairyGUI;

namespace ET.Client
{
	[FriendOf(typeof(UIChooseDifficulty))]
	public static class UIChooseDifficultySystem
	{
		public static void Awake(this UIChooseDifficulty self)
		{
			self.FUIUIChooseDifficulty.c1.SetSelectedIndex(0);
			
			var listModel = self.FUIUIChooseDifficulty.List_Model;
			listModel.itemRenderer = RenderModelListItem;
			listModel.onClickItem.Add(context => OnClickListModelItem(self,context));
			var configs = ModelCategory.Instance.GetAll();
			listModel.numItems = configs.Count;

			var listDifficulty = self.FUIUIChooseDifficulty.List_Difficulty;
			listDifficulty.itemRenderer = RenderListDifficultyItem;
			listDifficulty.onClickItem.Add(context => OnClickListDifficultyItem(self,context));
		}

		private static void OnClickListDifficultyItem(UIChooseDifficulty self, EventContext context)
		{
			var modelType = UIChooseDifficulty.ModelType;
			var modelId = UIChooseDifficulty.ModelId;
			var gObject = context.data as GObject;
			var index = self.FUIUIChooseDifficulty.List_Difficulty.GetChildIndex(gObject);
			int difficultyType = 0;
			if (modelType == 1)
			{
				var config = DifficultyNormalCategory.Instance.Get(index + 1 + 10000);
				difficultyType = config.Id;
			}
			else
			{
				var config = DifficultyHappyCategroy.Instance.Get(index + 1 + 20000);
				difficultyType = config.Id;
			}

			//发送模式及难度选择消息
			OnClickEnd(modelId, difficultyType, self.Root()).Coroutine();
		}

		private static async ETTask OnClickEnd(int modelId, int difficultyType, Scene scene)
		{
			//发送选择模式及难度消息
			var response = await scene.GetComponent<ClientSenderCompnent>().Call(new C2M_ChooseModelDifficulty() { Model = modelId, Difficulty = difficultyType }) as M2C_ChooseModelDifficulty;
			if (response.Error != ErrorCode.ERR_Success)
			{
				Log.Error(response.Error.ToString());
				scene.GetComponent<FUIComponent>().ClosePanel(PanelId.UIChooseDifficulty);
				return;
			}
			EventSystem.Instance.Publish(scene,new AfterChooseModelDifficulty());
		}

		private static void RenderListDifficultyItem(int index, GObject item)
		{
			GButton button = item.asButton;
			string title = "";
			if (UIChooseDifficulty.ModelType == 1)
			{
				var config = DifficultyNormalCategory.Instance.Get(index + 1 + 10000);
				string hasSec = config.HasSecond? "+第二幕" : "";
				title = $"{config.Desc}({config.WaveNumber}波{hasSec})";
			}
			else
			{
				var config = DifficultyHappyCategroy.Instance.Get(index + 1 + 20000);
				string hasSec = config.HasSecond? "+第二幕" : "";
				title = $"{config.Desc}({config.WaveNumber}波{hasSec})";
			}
			button.title = title;
		}

		private static void OnClickListModelItem(UIChooseDifficulty uiChooseDifficulty, EventContext eventContext)
		{
			var listModel = uiChooseDifficulty.FUIUIChooseDifficulty.List_Model;
			var index = listModel.GetChildIndex(eventContext.data as GObject);
			var config = ModelCategory.Instance.GetOrDefault(index + UIChooseDifficulty.ModelConfigId + 1);
			UIChooseDifficulty.ModelType = config.DifficultyType;
			UIChooseDifficulty.ModelId = config.Id;
			uiChooseDifficulty.FUIUIChooseDifficulty.c1.SetSelectedIndex(1);
			int count = UIChooseDifficulty.ModelType == 1? DifficultyNormalCategory.Instance.GetAll().Count : DifficultyHappyCategroy.Instance.GetAll().Count;
			uiChooseDifficulty.FUIUIChooseDifficulty.List_Difficulty.numItems = count;
		}

		private static void RenderModelListItem(int index, GObject item)
		{
			GButton button = item.asButton;
			var config = ModelCategory.Instance.Get(index + 1 + 1000);
			button.title = config.Desc;
		}

		public static void RegisterUIEvent(this UIChooseDifficulty self)
		{
		}

		public static void OnShow(this UIChooseDifficulty self, Entity contextData = null)
		{
		}

		public static void OnHide(this UIChooseDifficulty self)
		{
		}

		public static void BeforeUnload(this UIChooseDifficulty self)
		{
		}
	}
}