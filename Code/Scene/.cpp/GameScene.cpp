#include <stdio.h>
#include "../.h/Scene.h"
#include "../.h/GameScene.h"

extern SceneStep g_CurrentSceneStep;
extern SceneType g_CurrentScrneType;

void ExcuteGameScene()
{
	switch (g_CurrentSceneStep)
	{
	case SceneStepInit:
		InitializGameScene();
		break;
	case SceneStepUpdate:
		UpdateGameScene();
		break;
	case SceneStepTerminate:
		TerminateGameScene();
		break;
	}
}

void InitializGameScene()
{


	g_CurrentSceneStep = SceneStepUpdate;
}

void UpdateGameScene()
{

	g_CurrentSceneStep = SceneStepTerminate;
}

void TerminateGameScene()
{

	g_CurrentSceneStep = SceneStepInit;
	g_CurrentScrneType = SceneTypeClear;
}