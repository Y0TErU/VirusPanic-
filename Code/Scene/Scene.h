#pragma once

class Scene
{
public:
	void Execute();
	void ExecuteType(int currentType_);
	void ExecuteStep(int currentStep_);
	int GetCurrentType();		//シーンタイプのゲッター
	int GetCurrentStep();		//シーンステップのゲッター

private:
	enum SceneType
	{
		Title,		//タイトルシーン
		Game,		//ゲームシーン
		Clear,		//クリアシーン
	};

	enum SceneStep			//シーン内の状況
	{
		Init,		//シーンの初期化
		Update,		//シーンの更新
		Terminate,	//シーンの終了
	};

	int currentType = Title;	//シーンタイプ
	int currentStep = Init;		//シーンステップ

};


