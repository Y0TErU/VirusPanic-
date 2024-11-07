#include"Scene.h"
#include"TitleScene.h"
#include"GameScene.h"
#include"ClearScene.h"

TitleScene titleScene;
GameScene gameScene;
ClearScene clearScene;

Scene scene;

void Scene::Execute()
{
	switch (currentType)
	{
	case Title:
		titleScene.Execute(currentStep);
		break;
	case Game:
		gameScene.Execute(currentStep);
		break;
	case Clear:
		clearScene.Execute(currentStep);
		break;
	}
}

void Scene::ExecuteType(int currentType_)
{
	if (currentType_ == Title)
	{
		currentType = Game;
	}
	else if (currentType_ == Game)
	{
		currentType = Clear;
	}
	else if (currentType_ == Clear)
	{
		currentType = Title;
	}
}

void Scene::ExecuteStep(int currentStep_)
{
	if (currentStep_ == Init)
	{
		currentStep = Update;
	}
	else if (currentStep_ == Update)
	{
		currentStep = Terminate;
	}
	else if (currentStep_ == Terminate)
	{
		currentStep = Init;
	}
}

int Scene::GetCurrentType()
{
	return currentType;
}

int Scene::GetCurrentStep()
{
	return currentStep;

}
