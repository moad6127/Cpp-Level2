#include <iostream>
#include"Dog.h"
int main()
{
	Dog Happy;
	Animal* pDog = &Happy; // happy�� dog������ animal�̱⵵ �ϴ�.
	Animal* pAnim = new Dog();

	pAnim->Sound(); //�̶��� Animal�� Sound�� ȣ��ȴ�.
	
	delete pAnim;
}
