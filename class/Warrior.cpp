#include<iostream>
#include "Warrior.h"

Warrior::Warrior()
{
	std::cout << "+[Warrior] create!" << std::endl;
}

Warrior::~Warrior()
{
	std::cout << "-[Warrior] destructed" << std::endl;
}

void Warrior::Attack() const
{
	std::cout << "\tÀü»ç´Â °ËÀ» ÈÖµÑ·¶´Ù!" << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\t Àü»ç´Â °ËÀ» µÎ¹ø ÈÖµÑ·¶´Ù." << std::endl;
}
