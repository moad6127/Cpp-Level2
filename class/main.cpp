#include <iostream>
#include <cmath>
class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) :mX{ x }, mY{ y }
	{

	}
	operator const float() //����ȯ�� ��ȯŸ���� �����ʴ´�.
	{
		return sqrt(mX * mX + mY * mY);
	}
};

int main()
{
	Point2D pt1{ 2, 3 };

	float distnace = pt1;
	std::cout << distnace << std::endl;
}