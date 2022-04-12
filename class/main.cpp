#include <iostream>
#include"Dog.h"

class ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassA Func1" << std::endl;
	}
	virtual void Func2()
	{
		std::cout << "ClassA Func2" << std::endl;
	}
};
class ClassB : public ClassA
{
public:
	void Func1()
	{
		std::cout << "ClassB Func1" << std::endl;
	}
	void Func2()
	{
		std::cout << "ClassB Func2" << std::endl;
	}
};
class ClassC : public ClassB
{
public:
	void Func1()
	{
		std::cout << "ClassC Func1" << std::endl;
	}
	void Func2()
	{
		std::cout << "ClassC Func2" << std::endl;
	}

};



int main()
{
	ClassA* a = new ClassA;
	ClassB* b = new ClassB;

	a->Func1(); //�Ϲ� ��� �Լ�
	a->Func2(); //���� ��� �Լ�
	b->Func1(); //�������̵��� ����Լ�
	b->Func2(); //�����Լ� �������̵�

	std::cout << " ----------------------- " << std::endl;

//	ClassA* p = b;
	ClassA* p = new ClassC;
	p->Func1(); // classA func1
	p->Func2(); // ClassA �������Լ� -> *p�� ���� Ÿ��*-> ClassB�� �������̵� �Լ�
				// classC func2
//	Animal* pAnim = new Dog();
//
//	pAnim->Sound(); //�̶��� Animal�� Sound�� ȣ��ȴ�.
//	
//	delete pAnim;
}
