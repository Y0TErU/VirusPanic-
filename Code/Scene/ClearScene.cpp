#include <stdio.h>
#include <DxLib.h>
#include "Scene.h"
#include "ClearScene.h"

void ClearScene::Execute(int sceneStep_)
{
	switch (sceneStep_)
	{
	case 0:
		Initialize(sceneStep_);
		break;
	case 1:
		Update(sceneStep_);
		break;
	case 2:
		Terminate(sceneStep_);
		break;
	}
}

void ClearScene::Initialize(int sceneStep_)
{
	scene.ExecuteStep(scene.GetCurrentStep());
}

void ClearScene::Update(int sceneStep_)
{

	ClearDrawScreen();

	DrawCircle(300, 300, 0, GetColor(255, 0, 255), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		scene.ExecuteStep(scene.GetCurrentStep());
	}
}

void ClearScene::Terminate(int sceneStep_)
{

	scene.ExecuteType(scene.GetCurrentType());
	scene.ExecuteStep(scene.GetCurrentStep());
}
