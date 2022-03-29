#include<iostream>


class  Point2D
{
	int mX;
	int mY;

public:
	void SetX(int x);
	void SetY(int y);
	void Set(int x, int y);
	int GetX();
	int GetY();
	void Print();	
};

int main()
{
	Point2D pt1;

	pt1.Set(1, 1);
}

void Point2D::SetX(int x)
{
	mX = x;
}

void Point2D::SetY(int y)
{
	mY = y;
}

void Point2D::Set(int x, int y)
{
	mX = x;
	mY = y;
}

int Point2D::GetX()
{
	std::cout << mX << std::endl;
	return mX;
}

int Point2D::GetY()
{
	std::cout << mY << std::endl;
	return mY;
}

