#include <stdio.h>
#include "../.h/Scene.h"
#include "../.h/ClearScene.h"

extern SceneStep g_CurrentSceneStep;
extern SceneType g_CurrentSceneType;

void ExcuteClearScene()
{
	switch (g_CurrentSceneStep)
	{
	case SceneStepInit:
		InitializClearScene();
		break;
	case SceneStepUpdate:
		UpdateClearScene();
		break;
	case SceneStepTerminate:
		TerminateClearScene();
		break;
	}
}

void InitializClearScene()
{


	g_CurrentSceneStep = SceneStepUpdate;
}

void UpdateClearScene()
{

	g_CurrentSceneStep = SceneStepTerminate;
}

void TerminateClearScene()
{


	g_CurrentSceneStep = SceneStepInit;
}