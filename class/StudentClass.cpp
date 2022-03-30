#include<iostream>
#include<cstring>
#include "StudentClass.h"

void Student::SetName(char* name)
{
	strcpy_s(mName,name);
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

int Student::GetScore() const
{
	return mScore;
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

void Class::PrintStudentName()
{
	for (int i = 0; i < 10; i++)
	{
		pmClassStudent[i].GetName();
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
