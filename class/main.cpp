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
	ClassB::ClassA c1; //Ŭ����B�� Ŭ����A�� ����ϱ� ���ؼ��� �̷�ǥ��� �ؾߵ�

}