#pragma once

class ClearScene
{
public:
	void Initialize(int sceneStep_);	//クリアシーンの初期化
	void Update(int sceneStep_);		//クリアシーンの更新
	void Terminate(int sceneStep_);	//クリアシーンの終了
	void Execute(int sceneStep_);		//クリアシーンの遷移

};