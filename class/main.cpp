#include <iostream>
#include"Dog.h"
int main()
{
	Dog happy{1,1,Dog::BEAGEL}; // == Dog happy = Dog();

	happy.Sound();
	happy.Roll();
	happy.SetAge(3);

}
