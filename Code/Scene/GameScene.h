#pragma once

class GameScene
{
public:
	void Initialize(int sceneStep_);	//ゲームシーンの初期化
	void Update(int sceneStep_);		//ゲームシーンの更新
	void Terminate(int sceneStep_);	//ゲームシーンの終了
	void Execute(int sceneStep_);		//ゲームシーンの遷移

};