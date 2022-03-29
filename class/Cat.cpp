#include <iostream>
#include "Cat.h"


void Cat::Meow()
{
	std::cout << "Meow.." << std::endl;
}

int Cat::GetAge()
{

	return mAge;
}
