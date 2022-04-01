#include<iostream>

class ClassA
{
public:
	ClassA()
	{
		std::cout << "ClassA" << std::endl;
	}
};
class ClassB
{
public:
	ClassB()
	{
		std::cout << "ClassB" << std::endl;
	}
};
class ClassC
{
	ClassA mA;
	ClassB mB;
public:
	ClassC() : mA{}, mB{}
	{
		std::cout << "ClassC" << std::endl;
	}
};

int main()
{
	ClassC mC;
}