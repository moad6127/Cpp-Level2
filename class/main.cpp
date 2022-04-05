#include <iostream>
//

class MyClass
{
public:
	int mValue;

	MyClass(int value) : mValue{ value }
	{
		std::cout << "MyClass" << mValue << std::endl;
	}
	~MyClass()
	{
		std::cout << "    MyClass" << mValue << std::endl;
	}
};

MyClass operator+(const MyClass& lhs,const MyClass& rhs)
{
	return MyClass(lhs.mValue + rhs.mValue);
}
int main()
{
	MyClass c1{ 1 }, c2{ 2 }, c3{ 3 };
	MyClass c4 = c1 + c2 + c3;
}