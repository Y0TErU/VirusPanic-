#include <stdio.h>
#include "../.h/Scene.h"
#include"../.h/TitleScene.h"

extern SceneStep g_CurrentSceneStep;
extern SceneType g_CurrentScrneType;

void ExcuteTitleScene()
{
	switch (g_CurrentSceneStep)
	{
	case SceneStepInit:
		InitializTitleScene();
		break;
	case SceneStepUpdate:
		UpdateTitleScene();
		break;
	case SceneStepTerminate:
		TerminateTitleScene();
		break;
	}
}

void InitializTitleScene()
{


	g_CurrentSceneStep = SceneStepUpdate;
}

void UpdateTitleScene()
{

	g_CurrentSceneStep = SceneStepTerminate;
}

void TerminateTitleScene()
{

	g_CurrentSceneStep = SceneStepInit;
	g_CurrentScrneType = SceneTypeGame;
}