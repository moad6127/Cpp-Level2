#include <iostream>

class MyArray
{
private:
	int mArray[10];
public:
	MyArray() : mArray{}
	{

	}

	int& operator[](int index)	// ���� �ٲٰ������ ��ȯ���¸� int&�� ������ �Ѵ�.								// 
	{							// ���� ���ٲٰ� �Ϸ��� int���� ��ȯ���ָ� �ȴ�.
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