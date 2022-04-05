#include <iostream>

class Point2D
{

private:
	int mX;
	int mY;
public:
	Point2D(int x, int y) : mX{ x }, mY{ y }
	{

	}
	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}
	Point2D operator+(const Point2D& rhs)
	{
		Point2D result{ 0,0 };
		result.mX = this->mX + rhs.mX;
		result.mY = this->mY + rhs.mY;

		return result;
	}

};

int main()
{
	Point2D pt1{ 2,3 },pt2{4,5};
	pt1.Print();

	Point2D pt3 =pt1 + pt2;
	pt3.Print();

	Point2D pt4 = pt1 + pt2 + pt3;
	pt4.Print();

	

}