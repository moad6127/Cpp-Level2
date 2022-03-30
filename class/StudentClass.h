#pragma once
class Student
{
	char mName[10];
	int mStudentNumber;
	int mScore;

public:
	void SetName(char* name);
	void SetStudentNumber(int value);
	void SetScore(int value);
	void GetName() const;
	int GetScore() const;

};
class Class
{
	int mSchoolYear;
	int mSchoolClass;
	Student* pmClassStudent;

public:
	void SetSchoolYear(int value);
	void SetScoolClasss(int value);
	void SetStudent(Student* student);
	void PrintStudentName();
	int SumStudentScore();
};

