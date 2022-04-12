#include <iostream>
#include"Dog.h"

int main()
{
	Animal* pAnim = new Dog();

	pAnim->Sound(); 

	delete pAnim;

}
