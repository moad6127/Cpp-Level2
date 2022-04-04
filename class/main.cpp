#include<iostream>

class Sword
{
	friend class Warrior;
private:
	int mDamage;

public:
	Sword(int dmg) : mDamage{ dmg }
	{
	}

};
class Warrior
{
public:
	void AttackWith(Sword& sword)
	{
		std::cout << "Ä®À» ÈÖµé·¯ " << sword.mDamage << "¸¸Å­ÀÇ ÇÇÇØ¸¦ ÁÜ"<<std::endl;
	}
};

int main()
{
	Sword shortSword(10);
	Warrior player1;

	player1.AttackWith(shortSword);
}