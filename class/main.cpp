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

	void Print()
	{
		std::cout << "Quest ID : " << mID << std::endl;
		std::cout << "Quest mExp : " << mExp << std::endl;
	}
};

int main()
{
	Quest q1;

	q1.Print();
}