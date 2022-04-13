#include <iostream>
#include"Warrior.h"

int main()
{
	float x = 10.5f;
	//C++ style
	int y = static_cast<int>(x);
	//C style
	int z = int(x);

	std::cout << y << std::endl;
	std::cout << z << std::endl;



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

	delete pHero;


}
