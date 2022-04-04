#include<iostream>

class MyClass
{
public:
	static int sCount;
	MyClass()
	{
		std::cout<<++sCount<<std::endl;
	}
	~MyClass()
	{
		sCount--;
	}
};
int MyClass::sCount{ 0 };

int main()
{
	MyClass c1;
	{
		for (int i = 1; i < 5;i++)
		{
			MyClass c2;
		}
		MyClass c3;
	}
	std::cout << MyClass::sCount << std::endl;
}