#include<iostream>
#include<string>
#include<map>
#include<algorithm>
class Student
{
public:
	std::string mName;
	int mScore;

public:
	void Pirnt() const
	{
		std::cout << "�̸�: " << mName << std::endl;
		std::cout << "���� : " << mScore << std::endl;
	}

};
using Students = std::map<int, Student>;


void AddStudent(Students& map)
{
	std::cout << "��ȣ �̸� ���� : ";
	Student newStudent;
	int number{};
	if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
	{
		//auto => std::pair<std::map<int,Student> >::iteraotr, bool>
		auto result = map.insert({number,newStudent});
		if (result.second == false)
		{
			std::cout << "==============================" << std::endl;
			std::cout << "�ߺ��� ��ȣ �Դϴ�." << std::endl;
			std::cout << "==============================" << std::endl;
		}
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}
void RemoveStudent(Students& map)
{
	std::cout << "���� �л� ��ȣ : ";
	int number{};
	if (std::cin >> number)
	{
		if (map.erase(number) == 0)
		{
			std::cout<<"���� ��ȣ�Դϴ�."<<std::endl;
		}
	}
	else
	{
		std::cout << "�߸��� �Է��Դϴ�." << std::endl;
	}
}
void PrintStudents(const Students& map)
{
	for (const auto& e : map)
	{
		std::cout << "==============================" << std::endl;
		std::cout << "��ȣ : " << e.first << std::endl;
		e.second.Pirnt();
		std::cout << "==============================" << std::endl;
	}
}
void PrintScoreInfo(const Students& map)
{
	float sum{};
	for (const auto& e : map)
	{
		sum += e.second.mScore;
	}
	std::cout << "==============================" << std::endl;
	std::cout << "���� : " << sum << std::endl;
	std::cout << "��� : " << sum / map.size() << std::endl;
	std::cout << "==============================" << std::endl;
}
void PrintOverAverage(const Students& map)
{
	float average{};
	for (const auto& e : map)
	{
		average += e.second.mScore;
	}
	average /= map.size();
	for (const auto& e : map)
	{
		if (e.second.mScore >= average)
		{
			std::cout << "==============================" << std::endl;
			std::cout << "��ȣ : " << e.first << std::endl;
			e.second.Pirnt();
			std::cout << "==============================" << std::endl;
		}
	}
}
int main()
{
	//1. Kim 80
	//2. Lee 20
	//3. Park 50
	//4. Choi 30
	Students students{
		{1,{"Kim",80}},
		{2,{"Lee",20}},
		{3,{"Park",50}},
		{4,{"Choi",30}}
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
