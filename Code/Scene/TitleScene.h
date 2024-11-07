#pragma once

class TitleScene
{
public:
	void Initialize(int sceneStep_);	//タイトルシーンの初期化
	void Update(int sceneStep_);		//タイトルシーンの更新
	void Terminate(int sceneStep_);	//タイトルシーンの終了
	void Execute(int sceneStep_);		//タイトルシーンの遷移

};