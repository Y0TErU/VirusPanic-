#pragma once

class Vaccine
{
public:
	Vaccine(int texture_handle_);
	void Update();
	void Draw();
	void Delete();
	
	float GetPosX();
	float GetPosY();

private:
	float posX;
	float posY;
	bool isActive;
	int handle;
	float speed{ 4.0f };

};