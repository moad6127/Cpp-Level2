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
		std::cout << "��ȭ ����!!@!" << std::endl
			<< "�������� : " << sword.mDamage << std::endl;
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
	std::cout << "Į�� �ֵ鷯 " << sword.mDamage << "��ŭ�� ���ظ� ��" << std::endl;
}
//void UpgradeSword(Sword& sword)
//{
//	sword.mDamage *= 2;
//	std::cout << "��ȭ ����!!@!" << std::endl
//		<< "�������� : " << sword.mDamage << std::endl;
//}

int main()
{
	Sword shortSword(10);
	Warrior player1;

	player1.AttackWith(shortSword);
	UpgradeSword(shortSword);
}