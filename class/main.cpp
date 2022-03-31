#include<iostream>

class Quest
{
private:
	const int mID;
	int mExp;

public:
	Quest(int id, int exp) :
		mID{id},
		mExp{exp}
	{
	}
	void Print()
	{
		std::cout << "ID :" << mID<<", EXP : "<<mExp<<std::endl;
	}
};

int main()
{
	Quest q1(1, 100);
	q1.Print();
}