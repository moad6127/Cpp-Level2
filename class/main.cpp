#include<iostream>

class Quest
{
private:
	const int mID;
	int mExp;

public:
	Quest() : mID{1},mExp{1}
	{
		std::cout << "Quest()" << std::endl;
		// 기본작업

	}
	Quest(std::string excel) : Quest()
	{
		std::cout << "Quest(string)" << std::endl;
		//기본작업
		// Quest(); // 인스턴스를 새로하나 만드는데 이름이없다.
		//엑셀작업
	}
	void Print()
	{
		std::cout << "ID :" << mID<<", EXP : "<<mExp<<std::endl;
	}
};

int main()
{
	Quest q1("1.xlsx");
	q1.Print();

}