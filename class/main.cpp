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
		std::cout << "이름: " << mName << std::endl;
		std::cout << "점수 : " << mScore << std::endl;
	}

};
using Students = std::map<int, Student>;


void AddStudent(Students& map)
{
	std::cout << "번호 이름 점수 : ";
	Student newStudent;
	int number{};
	if (std::cin >> number >> newStudent.mName >> newStudent.mScore)
	{
		//auto => std::pair<std::map<int,Student> >::iteraotr, bool>
		auto result = map.insert({number,newStudent});
		if (result.second == false)
		{
			std::cout << "==============================" << std::endl;
			std::cout << "중복된 번호 입니다." << std::endl;
			std::cout << "==============================" << std::endl;
		}
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}
void RemoveStudent(Students& map)
{
	std::cout << "지울 학생 번호 : ";
	int number{};
	if (std::cin >> number)
	{
		if (map.erase(number) == 0)
		{
			std::cout<<"없는 번호입니다."<<std::endl;
		}
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
	}
}
void PrintStudents(const Students& map)
{
	for (const auto& e : map)
	{
		std::cout << "==============================" << std::endl;
		std::cout << "번호 : " << e.first << std::endl;
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
	std::cout << "총점 : " << sum << std::endl;
	std::cout << "평균 : " << sum / map.size() << std::endl;
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
			std::cout << "번호 : " << e.first << std::endl;
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
		std::cout << "1. 학생 추가" << std::endl;
		std::cout << "2. 학생 제거" << std::endl;
		std::cout << "3. 전체 학생 출력" << std::endl;
		std::cout << "4.클래스 평균 및 총점" << std::endl;
		std::cout << "5. 클래스 평균 이상 학생 목록" << std::endl;
		std::cout << "6. 종료" << std::endl;

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
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;
		}
	}

}
