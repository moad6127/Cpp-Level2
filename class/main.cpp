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
		std::cout << "Į�� �ֵ鷯 " << sword.mDamage << "��ŭ�� ���ظ� ��"<<std::endl;
	}
};

int main()
{
	Sword shortSword(10);
	Warrior player1;

	player1.AttackWith(shortSword);
}