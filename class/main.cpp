#include <iostream>

class MyClass
{
public:
	int mValue;

	MyClass()
	{
		std::cout << "MyClass()" << std::endl;
	}
	MyClass(int x) : mValue{ x }
	{
		std::cout << "MyClass(int)" << std::endl;
	};
	MyClass(const MyClass& c) : mValue{c.mValue}
	{
		std::cout << "MyClass(const MyClass&)" << std::endl;
	}
	MyClass& operator=(const MyClass& c)
	{
		mValue = c.mValue;
		std::cout << "operator=" << std::endl;
		return *this;
	}

};

int main()
{
	MyClass c1{ MyClass{1} }; //
	MyClass c2,c3 ;

	c2 = c3 = c1;
	std::cout << c2.mValue << std::endl;
}