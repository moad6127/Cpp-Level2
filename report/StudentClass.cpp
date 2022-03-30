#include<iostream>
#include<cstring>
#include "StudentClass.h"

Student::Student()
{
	mName[1] = '\0';
	mStudentNumber = 1;
	mScore = 1;
}

void Student::SetName(char* name)
{
	strcpy_s(mName, name);
}

void Student::SetStudentNumber(int value)
{
	mStudentNumber = value;
}

void Student::SetScore(int value)
{
	mScore = value;
}

void Student::GetName() const
{
	std::cout << mName << std::endl;
}

int Student::GetStudentNumber() const
{
	return mStudentNumber;
}

int Student::GetScore() const
{
	return mScore;
}




Class::Class()
{
	mSchoolYear = 1;
	mSchoolClass = 1;
	pmClassStudent = nullptr;
}

void Class::SetSchoolYear(int value)
{
	mSchoolYear = value;
}

void Class::SetScoolClasss(int value)
{
	mSchoolClass = value;
}


void Class::SetStudent(Student* student)
{
	pmClassStudent = student;
}

void Class::PrintStudentList()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "이름 : ";
		pmClassStudent[i].GetName();
		std::cout << "번호 :" << pmClassStudent[i].GetStudentNumber() << std::endl;
		std::cout << "점수 :" << pmClassStudent[i].GetScore() << std::endl;
		std::cout << "-------------------------" << std::endl;
	}
}

int Class::SumStudentScore()
{
	int sum{};
	for (int i = 0; i < 10; i++)
	{
		sum += pmClassStudent[i].GetScore();
	}
	return sum;
}
