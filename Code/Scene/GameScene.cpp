#include <DxLib.h>
#include <math.h>
#include "Scene.h"
#include "GameScene.h"
#include "../Object/Vaccine.h"
#include "../Object/Virus.h"

Vaccine vaccine;
Virus virus;

void GameScene::Execute(int sceneStep_)
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
	}
}

void GameScene::Initialize(int sceneStep_)
{

	scene.ExecuteStep(sceneStep_);
}

void GameScene::Update(int sceneStep_)
{

	ClearDrawScreen();

	DrawCircle(300, 300, 3, GetColor(0, 255, 255), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		scene.ExecuteStep(scene.GetCurrentStep());
	}
}

void GameScene::Terminate(int sceneStep_)
{

	scene.ExecuteType(scene.GetCurrentType());
	scene.ExecuteStep(scene.GetCurrentStep());
}