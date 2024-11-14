#include <DxLib.h>
#include <math.h>
#include "Scene.h"
#include "GameScene.h"
#include "../Object/Vaccine.h"
#include "../Object/Virus.h"
#include "../Object/Stage.h"

// ï`âÊÇÃì«Ç›çûÇ›
int virus_handle = -1;
int vaccine_handle = -1;


Vaccine vaccine(vaccine_handle);
Virus virus(virus_handle);
Stage stage;

void GameScene::Execute()
{
	switch (currentStep)
	{
	case 0:
		Initialize();
		break;
	case 1:
		Update();
		break;
	case 2:
		Terminate();
		break;
	}
}

void GameScene::Initialize()
{
	virus_handle = LoadGraph("Res/Object/Virus.png");
	vaccine_handle = LoadGraph("Res/Object/Vaccine.png");

	ExecuteSceneStep();
}

void GameScene::Update()
{
	vaccine.Update();
	virus.Update(vaccine.GetPosX(),vaccine.GetPosY());

	ClearDrawScreen();
	

	stage.Draw();
	vaccine.Draw();
	virus.Draw();

	//DrawCircle(500, 500, 10, GetColor(255, 255, 255), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_TAB))
	{
		ExecuteSceneStep();
	}
}

void GameScene::Terminate()
{
	vaccine.Delete();
	virus.Delete();

	ExecuteSceneStep();
	ExecuteScenetype();
}

void GameScene::ExecuteSceneStep()
{
	if (currentStep == sceneInit)
	{
		currentStep = sceneUpdate;
	}
	else if (currentStep == sceneUpdate)
	{
		currentStep = sceneTerminate;
	}
	else if (currentStep == sceneTerminate)
	{
		currentStep = sceneInit;
	}
}