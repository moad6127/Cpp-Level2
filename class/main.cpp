#include<iostream>

class Sword;

class Warrior
{
public:
	void AttackWith(Sword& sword);
	void Defence();

};

class Sword
{
	//friend class Warrior;
	friend void Warrior::AttackWith(Sword& sword);
	friend void UpgradeSword(Sword& sword)
	{
		sword.mDamage *= 2;
		std::cout << "강화 성공!!@!" << std::endl
			<< "데미지는 : " << sword.mDamage << std::endl;
	}
private:
	int mDamage;

public:
	Sword(int dmg) : mDamage{ dmg }
	{
	}

};	
void Warrior::AttackWith(Sword& sword)
{
	std::cout << "칼을 휘들러 " << sword.mDamage << "만큼의 피해를 줌" << std::endl;
}
//void UpgradeSword(Sword& sword)
//{
//	sword.mDamage *= 2;
//	std::cout << "강화 성공!!@!" << std::endl
//		<< "데미지는 : " << sword.mDamage << std::endl;
//}

int main()
{
	Sword shortSword(10);
	Warrior player1;

	player1.AttackWith(shortSword);
	UpgradeSword(shortSword);
}