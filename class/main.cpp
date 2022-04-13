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

	delete pHero;


}
