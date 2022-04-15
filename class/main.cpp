#include <iostream>
#include<vector>

int main()
{

	std::vector<int> v{ 1,2,3 };

	std::vector<int>::iterator itr;// 포인터이다.

	itr = v.begin();
	// while문 으로 하기
	while (itr != v.end()) 
	{
		std::cout << *itr << std::endl;
		itr++;
	}
	//for문으로 만들기
	for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}
}
