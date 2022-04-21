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
		std::cout << "번호 : " << mNumber << std::endl;
		std::cout << "이름: " << mName << std::endl;
		std::cout << "점수 : " << mScore << std::endl;
	}

};
using Students = std::vector<Student>;


void AddStudent(Students& vector)
{
	//번호, 이름, 점수 입력
	Student temp;
	if (std::cin >> temp.mNumber >> temp.mName >> temp.mScore)
	{
		auto itr = std::find_if(vector.begin(), vector.end(), [&](auto& e)
			{
				return e.mNumber == temp.mNumber;
			});
		if (itr != vector.end())
		{
			std::cout << "중복된 번호 입니다." << std::endl;
			return;
		}
		/*for (const auto& e : vector)
		{
			if (e.mNumber == temp.mNumber)
			{
				std::cout << "중복된 번호 입니다." << std::endl;
				return;
			}
		}*/
		vector.push_back(temp);
	}
	else
	{
		std::cout << "잘못된 입력입니다." << std::endl;
		return;
	}
	
}
void RemoveStudent(Students& vector)
{
	//번호로 삭제
	int removeNum{};
	std::cout << "삭제할 학생의 번호를 입력하세요: ";
	if (std::cin >> removeNum)
	{
		Students::iterator itr = std::remove_if(vector.begin(), vector.end(), [&](auto& e)
			{
				return e.mNumber == removeNum;
			});
		if (itr == vector.end())
		{
			std::cout << "삭제할 학생이 없습니다." << std::endl;
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
	std::cout << "학생들의 총점은 : "<<sum << std::endl;
	std::cout << "학생들의 평균은 :" << float(sum) / vector.size() << std::endl;
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
