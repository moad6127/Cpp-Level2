#include<iostream>
#include"Cat.h"


int main()
{

	Cat nacho;
	nacho.Meow();
	nacho.GetAge();	
	std::cout << nacho.GetAge() << std::endl;

	//	
	Cat* pNewCat = new Cat {};

	pNewCat->Meow();

	delete pNewCat;
}