#pragma once

enum SceneType			//シーンの状態
{
	SceneTypeTitle,		//タイトルシーン
	SceneTypeGame,		//ゲームシーン
	SceneTypeClear,		//クリアシーン

};

enum SceneStep			//シーン内の状況
{
	SceneStepInit,		//シーンの初期化
	SceneStepUpdate,	//シーンの更新
	SceneStepTerminate,	//シーンの終了
};

void ExcuteScene();