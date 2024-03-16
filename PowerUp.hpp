#pragma once

#include "Global.hpp"

struct Powerup
{
	//0 - Shield
	//1 - Fast reload
	//2 - 3 bullets
	//3 - Mirrored controls (power-DOWN! I'm so proud of this joke)
	//Damn, I should've used enums. That would've made the code more readable.
	byte type;
	bool dead;

	short x;
	short y;

	Powerup(short i_x, short i_y, byte i_type) :
		dead(0),
		x(i_x),
		y(i_y),
		type(i_type)
	{

	}

	IntRect get_hitbox() const
	{
		return IntRect(x + 0.25f * BASE_SIZE, y + 0.25f * BASE_SIZE, 0.5f * BASE_SIZE, 0.5f * BASE_SIZE);
	}
};