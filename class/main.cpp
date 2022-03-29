#include<iostream>
#include"Cat.h"


int main()
{

	Cat nacho;
	nacho.Meow();
	std::cout << nacho.GetAge() << std::endl;

	//	
	Cat* pNewCat = new Cat {};

	pNewCat->Meow();

	delete pNewCat;
}