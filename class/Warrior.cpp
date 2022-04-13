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
	std::cout << "\t����� ���� �ֵѷ���!" << std::endl;
}

void Warrior::DoubleSlash() const
{
	std::cout << "\t ����� ���� �ι� �ֵѷ���." << std::endl;
}
