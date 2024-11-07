#pragma once

class Vaccine
{
public:
	Vaccine();
	void Update();
	void Draw();
	void Delete();
	int handle;
	
	float GetPosX();
	float GetPosY();

private:
	
	float posX{ 100.0f };
	float posY{ 100.0f };
	bool isActive = false;
	float speed{ 4.0f };

};