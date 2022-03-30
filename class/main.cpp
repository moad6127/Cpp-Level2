#include<iostream>

class Quest
{
private:
	int mID;
	int mExp;
	
public:
	//Default Constructor
	Quest()
	{
		mID = 0;
		mExp = 0;
	}
	//Constructor Overloading
	Quest(int id, int exp)
	{
		mID = id;
		mExp = exp;
	}

	void Print()
	{
		std::cout << "Quest ID : " << mID << std::endl;
		std::cout << "Quest mExp : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1{};
	Quest q2{ 10,100 };

	q1.Print();
	q2.Print();
}