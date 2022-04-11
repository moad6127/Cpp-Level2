#include <iostream>
#include"Dog.h"
int main()
{
	Dog Happy;
	Animal* pDog = &Happy; // happy는 dog이지만 animal이기도 하다.
	Animal* pAnim = new Dog();

	pAnim->Sound(); //이때는 Animal의 Sound가 호출된다.
	
	delete pAnim;
}
