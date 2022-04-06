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
{	//ostream은 생성자를 private로 만들수 없게 해놓았다.
	//따라서 값에의한 호출말고 레퍼런스로 해야된다.
	os << "(" << pt.mX << ", " << pt.mY << ")" << std::endl;
	return os;
}

int main()
{
	Point2D pt1{ 2, 3 };


	std::cout << pt1;
}