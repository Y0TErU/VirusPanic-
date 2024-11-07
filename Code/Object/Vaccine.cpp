#include "Vaccine.h"
#include <DxLib.h>
#include <math.h>

Vaccine::Vaccine()
{
	isActive = true;
	posX = 500.0;
	posY = 100;
	
	handle = 0;
}

void Vaccine::Update()
{
	// �΂ߓ��͖h�~
	bool moving_x{ false };
	bool moving_y{ false };

	// �㍶�E�L�[�̓��͂ňړ����鏈��������
	if (CheckHitKey(KEY_INPUT_W) && moving_x == false)
	{
		posY -= speed;
		moving_y = true;
	}

	if (CheckHitKey(KEY_INPUT_S) && moving_x == false)
	{
		posY += speed;
		moving_y = true;
	}

	if (CheckHitKey(KEY_INPUT_A) && moving_y == false)
	{
		posX -= speed;
		moving_x = true;
	}

	if (CheckHitKey(KEY_INPUT_D) && moving_y == false)
	{
		posX += speed;
		moving_x = true;
	}
	
	
}

void Vaccine::Draw()
{
	if (handle == 0)	//�ǂݍ��݂���x���������悤�ɂ���
	{
		handle = LoadGraph("Res/Object/vaccine.png");
	}

	if (isActive == true)
	{
		DrawGraph(posX, posY, handle, true);
	}
}

void Vaccine::Delete()
{
	DeleteGraph(handle);
}
float Vaccine::GetPosX()
{
	return posX;

}
float Vaccine::GetPosY()
{
	return posY;

}

