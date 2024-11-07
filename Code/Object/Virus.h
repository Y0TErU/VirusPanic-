#pragma once

class Virus
{
public:
	Virus();
	void Update(float x, float y);
	void Draw();
	void Delete();
	int handle;

private:
	float posX{ 100.0f };
	float posY{ 100.0f };

	bool isActive{ false };
	float speed{ 4.5f };

};