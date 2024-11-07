#include "Virus.h"
#include <DxLib.h>
#include <math.h>

Virus::Virus()
{
	isActive = true;
	posX = 100.0f;
	posY = 100.0f;
	handle = 0;

}

void Virus::Update(float x,float y)
{
	float length{ 0.0f };
	float vec_x{ 0.0f };
	float vec_y{ 0.0f };

	vec_x = posX - x;
	vec_y = posY - y;

	length = sqrtf(vec_x * vec_x + vec_y * vec_y);

	vec_x /= length;
	vec_y /= length;

	posX -= vec_x * speed;
	posY -= vec_y * speed;


}

void Virus::Draw()
{
	if (handle == 0)	//ì«Ç›çûÇ›Ç™àÍìxÇæÇØÇ≥ÇÍÇÈÇÊÇ§Ç…Ç∑ÇÈ
	{
		handle = LoadGraph("Res/Object/Virus.png");
	}

	if (isActive == true)
	{
		DrawGraph(posX, posY, handle, true);
	}
}

void Virus::Delete()
{
	DeleteGraph(handle);
}