#include<iostream>
#include"Point2D.h"
#include"StudentClass.h"

class MyClass
{
public:
	MyClass()
	{
		std::cout << "Constructor" << std::endl;
	}
	~MyClass()
	{
		std::cout << "Destructor" << std::endl;
	}
};

int main()
{
	MyClass c;
	
	std::cout << "Good" << std::endl;

}