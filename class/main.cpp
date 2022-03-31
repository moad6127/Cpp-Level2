#include<iostream>


class ClassB
{
public:
	class ClassA
	{
	public:
		ClassA()
		{
			std::cout << "Class A Constructor!" << std::endl;
		}
	};
	ClassA mA;
public:
	ClassB()
	{
		std::cout << "Class B Constructor!" << std::endl;
	}
};

int main()
{
	ClassB myClass;
	ClassB::ClassA c1; //클래스B의 클래스A를 사용하기 위해서는 이런표기로 해야됨

}