#include "Virus.h"
#include <DxLib.h>
#include <math.h>


Virus::Virus(int texture_handle_)
{
	isActive = true;
	posX = 500.0f;
	posY = 500.0f;
	handle = texture_handle_;

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
	if (handle == -1)
	{
		return;
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