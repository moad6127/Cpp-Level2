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

	a->Func1(); //일반 멤버 함수
	a->Func2(); //가상 멤버 함수
	b->Func1(); //오버라이딩된 멤버함수
	b->Func2(); //가상함수 오버라이딩

	std::cout << " ----------------------- " << std::endl;

//	ClassA* p = b;
	ClassA* p = new ClassC;
	p->Func1(); // classA func1
	p->Func2(); // ClassA 가상멤버함수 -> *p의 실제 타입*-> ClassB의 오버라이딩 함수
				// classC func2
//	Animal* pAnim = new Dog();
//
//	pAnim->Sound(); //이때는 Animal의 Sound가 호출된다.
//	
//	delete pAnim;
}
