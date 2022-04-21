#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
class Student
{
public:
	int mNumber;
	std::string mName;
	int mScore;

public:
	void Pirnt() const
	{
		std::cout << "��ȣ : " << mNumber << std::endl;
		std::cout << "�̸�: " << mName << std::endl;
		std::cout << "���� : " << mScore << std::endl;
	}

};
using Students = std::vector<Student>;


void AddStudent(Students& vector)
{
	//��ȣ, �̸�, ���� �Է�
	Student temp;
	if (std::cin >> temp.mNumber >> temp.mName >> temp.mScore)
	{
		auto itr = std::find_if(vector.begin(), vector.end(), [&](auto& e)
			{
				return e.mNumber == temp.mNumber;
			});
		if (itr != vector.end())
		{
			std::cout << "�ߺ��� ��ȣ �Դϴ�." << std::endl;
			return;
		}
		/*for (const auto& e : vector)
		{
			if (e.mNumber == temp.mNumber)
			{
				std::cout << "�ߺ��� ��ȣ �Դϴ�." << std::endl;
				return;
			}
		}*/
		vector.push_back(temp);
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		return;
	}
	
}
void RemoveStudent(Students& vector)
{
	//��ȣ�� ����
	int removeNum{};
	std::cout << "������ �л��� ��ȣ�� �Է��ϼ���: ";
	if (std::cin >> removeNum)
	{
		Students::iterator itr = std::remove_if(vector.begin(), vector.end(), [&](auto& e)
			{
				return e.mNumber == removeNum;
			});
		if (itr == vector.end())
		{
			std::cout << "������ �л��� �����ϴ�." << std::endl;
		}
		vector.erase(itr);


		/*Students::iterator itr;
		for (itr = vector.begin(); itr != vector.end(); itr++)
		{
			if (itr->mNumber == removeNum)
			{
				vector.erase(itr);
				return;
			}
		}*/
		
	}
	else
	{

	}

	
}
void PrintStudents(const Students& vector)
{
	for (int i = 0 ; i<vector.size();i++)
	{
		std::cout << "=========================================" << std::endl;
		vector[i].Pirnt();
		std::cout << "==========================================" << std::endl;
	}
}
void PrintScoreInfo(const Students& vector)
{
	int sum{};
	for (const auto& e : vector)
	{
		sum += e.mScore;
	}
	std::cout << "==========================================" << std::endl;
	std::cout << "�л����� ������ : "<<sum << std::endl;
	std::cout << "�л����� ����� :" << float(sum) / vector.size() << std::endl;
	std::cout << "==========================================" << std::endl;
}
void PrintOverAverage(const Students& vector)
{
	int sum{};
	for (const auto& e : vector)
	{
		sum += e.mScore;
	}
	for (int i = 0; i < vector.size(); i++)
	{
		if (vector[i].mScore > (float(sum) / vector.size()))
		{
			std::cout << "==========================================" << std::endl;
			vector[i].Pirnt();
			std::cout << "==========================================" << std::endl;
		}
	}
}
int main()
{
	//1. Kim 80
	//2. Lee 20
	//3. Park 50
	//4. Choi 30
	std::vector<Student> students{
		{1,"Kim",80},
		{2,"Lee",20},
		{3,"Park",50},
		{4,"Choi",30}
	};
	int command{};
	while (command != 6)
	{
		std::cout << "1. �л� �߰�" << std::endl;
		std::cout << "2. �л� ����" << std::endl;
		std::cout << "3. ��ü �л� ���" << std::endl;
		std::cout << "4.Ŭ���� ��� �� ����" << std::endl;
		std::cout << "5. Ŭ���� ��� �̻� �л� ���" << std::endl;
		std::cout << "6. ����" << std::endl;

		std::cout << "> ";
		std::cin >> command;
		switch (command)
		{
		case 1:
			AddStudent(students);
			break;
		case 2:
			RemoveStudent(students);
			break;
		case 3:
			PrintStudents(students);
			break;
		case 4:
			PrintScoreInfo(students);
			break;
		case 5:
			PrintOverAverage(students);
			break;
		case 6:
			break;
		default:
			std::cout << "�߸��� ��ɾ� �Դϴ�." << std::endl;
			break;
		}
	}

}
