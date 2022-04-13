#include <iostream>
#include"Warrior.h"

int main()
{
	Character* pHero = new Warrior;
	pHero->Attack();
	//((Warrior*)pHero)->DoubleSlash(); //형변환을 통해서 전용스킬 사용
	Warrior* pWarrior = dynamic_cast<Warrior*>(pHero);
	if (pWarrior == nullptr) //형변환 실패시
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
