#include "Vaccine.h"
#include <DxLib.h>
#include <math.h>

Vaccine::Vaccine(int texture_handle_)
{
	isActive = true;
	posX = 100.0f;
	posY = 100.0f;
	handle = texture_handle_;
}

void Vaccine::Update()
{

	if (isActive == true)
	{
		// Î‚ß“ü—Í–h~
		bool moving_x{ false };
		bool moving_y{ false };

		// ã¶‰EƒL[‚Ì“ü—Í‚ÅˆÚ“®‚·‚éˆ—‚ğÀ‘•
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
}

void Vaccine::Draw()
{
	if (handle == -1)
	{
		return;
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

