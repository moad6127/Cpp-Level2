#include <iostream>
#include"Dog.h"
int main()
{
	Dog happy; // == Dog happy = Dog();

	happy.Sound();
	happy.Roll();
	happy.SetAge(3);
}
