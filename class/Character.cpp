#include<iostream>
#include "Character.h"

Character::Character() : mHP{0}
{
	std::cout << "+[Character] Create!" << std::endl;
}

Character::~Character()
{
	std::cout << "-[Character] destructed" << std::endl;
}

