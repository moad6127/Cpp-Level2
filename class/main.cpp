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
		// �⺻�۾�

	}
	Quest(std::string excel) : Quest()
	{
		std::cout << "Quest(string)" << std::endl;
		//�⺻�۾�
		// Quest(); // �ν��Ͻ��� �����ϳ� ����µ� �̸��̾���.
		//�����۾�
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