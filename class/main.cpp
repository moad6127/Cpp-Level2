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
	const Point2D& operator++() //전위 연산자
	{
		++mX;
		++mY;

		return *this;
	}
	const Point2D& operator++(int value)
	{
		//반환 후 증가
		Point2D temp{*this};
		++(*this);

		return temp;

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

	Point2D pt5 = ++pt1;
	pt5.Print();
	
	Point2D pt6 = pt1++;
	pt6.Print();
	pt1.Print();
}