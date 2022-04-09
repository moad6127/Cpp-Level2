#include<iostream>
#include"Point2D.h"
#include"StudentClass.h"

int main()
{
	Point2D A1{3,4};
	Point2D A2{ 1,1 };
	Point2D A3;
	A3 = A1 + A2;
	A3.PirntX_Y();
}