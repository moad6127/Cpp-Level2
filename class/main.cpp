#include <iostream>
class Point2D
{
	friend std::ostream& operator<< (std::ostream& os,const Point2D& pt);
private:
	int mX;
	int mY;

public:
	Point2D(int x, int y) :mX{ x }, mY{ y }
	{

	}

};
std::ostream& operator<< (std::ostream& os,const Point2D& pt)
{	//ostream�� �����ڸ� private�� ����� ���� �س��Ҵ�.
	//���� �������� ȣ�⸻�� ���۷����� �ؾߵȴ�.
	os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
	return os;
}

int main()
{
	Point2D pt1{ 2, 3 };


	std::cout << pt1;
}