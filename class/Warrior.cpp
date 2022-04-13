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
	std::cout << "\t전사는 검을 휘둘렀다!" << std::endl;
}

void Warrior::Dead() const
{
	std::cout << "\t전사는 죽었습니다." << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\t 전사는 검을 두번 휘둘렀다." << std::endl;
}
