#include <iostream>
#include"Warrior.h"

int main()
{

	Character* pHero = new Warrior;
	pHero->Attack();
	
	delete pHero;


}
