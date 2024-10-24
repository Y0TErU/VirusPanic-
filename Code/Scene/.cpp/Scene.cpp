#include<stdio.h>
#include"../.h/Scene.h"
#include"../.h/TitleScene.h"
#include"../.h/GameScene.h"
#include"../.h/ClearScene.h"

SceneType g_CurrentScrneType = SceneTypeTitle;
SceneStep g_CurrentSceneStep = SceneStepInit;

void ExcuteScene()
{
	switch (g_CurrentScrneType)
	{
	case SceneTypeTitle:
		ExcuteTitleScene();
		break;
	case SceneTypeGame:
		ExcuteGameScene();
		break;
	case SceneTypeClear:
		ExcuteClearScene();
		break;

	}

}
