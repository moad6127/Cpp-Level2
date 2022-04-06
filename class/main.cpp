#include <iostream>
class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) :mX{ x }, mY{ y }
	{

	}
	void operator() ()
	{
		mX = 0;
		mY = 0;
	}
	void operator() (int x, int y)
	{
		mX = x;
		mY = y;
	}
	void Print()
	{
		std::cout << "(" << mX << ", " << mY << ")" << std::endl;
	}
};

int main()
{
	Point2D pt1{ 2, 3 };
	// function + object = functor
	pt1();
	pt1.Print();
	pt1(3, 3);
	pt1.Print();
}