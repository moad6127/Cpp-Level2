#include<iostream>
#include"Point2D.h"
#include"StudentClass.h"

int main()
{
	Point2D p1{};
	p1.SetX(3);
	p1.SetY(5);
	std::cout << p1.ZeroPointLength() << std::endl;
	p1.PirntX_Y();

	Student student[10]{};
	//for (int i = 0; i < 10; i++)
	//{		//이름 입력받기
	//	char name[10];
	//	std::cin >> name;
	//	student[i].SetName(name);
	//}
	Class class1;
	class1.SetStudent(student);
	class1.PrintStudentName();
	std::cout<<class1.SumStudentScore()<<std::endl;

}