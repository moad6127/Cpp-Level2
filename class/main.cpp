#include<iostream>

class MyClass
{
public:
	int mValue1{ 1 };
	int mValue2{ 2 };

	//MyClass(int value1)
	//{
	//	mValue1 = value1;
	//	mValue2 = 0;
	//}
};

int main()
{
	MyClass c1; 
	MyClass c2{ 1 };
	MyClass C3{ 3,4 };
}