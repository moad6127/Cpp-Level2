#pragma once
#include "Character.h"
class Warrior : public Character
{
public:
	Warrior();
	~Warrior();

	void Attack() const override;
	void DoubleSlash() const; //Warrior 전용스킬
};

