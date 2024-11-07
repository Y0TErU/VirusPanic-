#include <DxLib.h>
#include <math.h>
#include "Scene.h"
#include "TitleScene.h"

void TitleScene::Execute(int sceneStep_)
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

void TitleScene::Initialize(int sceneStep_)
{

	scene.ExecuteStep(sceneStep_);
}

void TitleScene::Update(int sceneStep_)
{

	ClearDrawScreen();

	DrawCircle(300, 300, 3, GetColor(255, 255, 255),true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		scene.ExecuteStep(scene.GetCurrentStep());
	}
}

void TitleScene::Terminate(int sceneStep_)
{

	scene.ExecuteType(scene.GetCurrentType());
	scene.ExecuteStep(scene.GetCurrentStep());
}