#pragma once

class Virus
{
public:
	Virus(int texture_handle_);
	void Update(float x, float y);
	void Draw();
	void Delete();
	

private:
	float posX;
	float posY;
	int handle;
	float speed{ 4.5f };
	bool isActive;
	const int createNam{ 5 };

};