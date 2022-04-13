#include <iostream>
#include"Warrior.h"

class MyFunctions
{
public:
	//f(x) =x
	int NomalFunction(int x)
	{
		return x;
	}
	//f(x) = x^2
	int SquareFunction(int x)
	{
		return x * x;
	}
};
using FunctionPtr = int(MyFunctions::*)(int);
int Sigma(MyFunctions& instance, FunctionPtr f, int m, int n)
{
	int sum{};
	for (int i = m; i <= n; i++)
	{
		sum +=(instance.*f)(i);
	}
	return sum;
}


int main()
{
	MyFunctions function;

	//함수 포인터
	std::cout << Sigma(function,&MyFunctions::NomalFunction, 1, 100) << std::endl;
	std::cout << Sigma(function,&MyFunctions::SquareFunction, 1, 10) << std::endl;



	//Character* pHero = new Warrior;
	//pHero->Attack();
	////((Warrior*)pHero)->DoubleSlash(); //형변환을 통해서 전용스킬 사용
	//Warrior* pWarrior = dynamic_cast<Warrior*>(pHero);
	//if (pWarrior == nullptr) //형변환 실패시
	//{
	//	std::cout << "ERROR" << std::endl;
	//}
	//else
	//{
	//	pWarrior->DoubleSlash();
	//}

	//pHero->Dead();
	//delete pHero;


}
