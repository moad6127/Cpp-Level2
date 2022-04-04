#include<iostream>

class MyClass
{
private:
	int mValue1;
	int mValue2;

public:
	MyClass() : MyClass(1,1)
	{

	}
	MyClass(int v1, int v2) : mValue1{ v1 }, mValue2{ v2 }
	{

	}
	void SetValue1(int x)
	{
		mValue1 = x;
	}
	void Print() const
	{
		std::cout << mValue1 << ", " << mValue2 << std::endl;
	}
};


int main()
{
	const MyClass c1;
	const MyClass c2{ 2,2 };
	const MyClass c3{ 3,3 };
	MyClass c4{ 4,4 };
	c4.SetValue1(10);

	c1.Print();
	c2.Print();
	c3.Print();
	c4.Print();
}