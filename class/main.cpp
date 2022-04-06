#include <iostream>

class MyArray
{
private:
	int mArray[10];
public:
	MyArray() : mArray{}
	{

	}

	int& operator[](int index)	// 값을 바꾸고싶으면 반환형태를 int&로 만들어야 한다.								// 
	{							// 값을 못바꾸게 하려면 int형을 반환해주면 된다.
		return mArray[index];
	}
};

int main()
{
	MyArray array1;
	std::cout << array1[0] << std::endl;
	array1[0] = 1;
	std::cout << array1[0] << std::endl;

}