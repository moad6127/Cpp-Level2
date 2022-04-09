#include<iostream>
#include"Point2D.h"
#include"StudentClass.h"

int main()
{
	Point2D A1{3,4};
	Point2D A2{ 1,1 };
	Point2D A3;
	Point2D A4{ A1 };
	A3 = A1 + A2;
	std::cout << A3 << std::endl;;
	A3 = A4 - A2;
	std::cout << A3 << A4 << std::endl;
	A3 = A2;
	std::cout << A3;
}