#include <iostream>
#include"Warrior.h"

int main()
{
	Character* pHero = new Warrior;
	pHero->Attack();
	//((Warrior*)pHero)->DoubleSlash(); //����ȯ�� ���ؼ� ���뽺ų ���
	Warrior* pWarrior = dynamic_cast<Warrior*>(pHero);
	if (pWarrior == nullptr) //����ȯ ���н�
	{
		std::cout << "ERROR" << std::endl;
	}
	else
	{
		pWarrior->DoubleSlash();
	}

	pHero->Dead();
	delete pHero;


}
