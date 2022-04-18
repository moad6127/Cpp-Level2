#include <iostream>
#include<vector>

int main()
{

	std::vector<int> v{ 1,2,3 };

	std::vector<int>::iterator itr;// 포인터이다.

	for (auto e : v)
	{
		std::cout << e << '\n';
	}

	//iterator while
	itr = v.begin();
	// while문 으로 하기
	while (itr != v.end()) 
	{
		std::cout << *itr << std::endl;
		itr++;
	}
	//for문으로 만들기
	//타입을 추측할수 있으면 auto를 사용할수 있다.

	for (auto itr = v.begin(); itr != v.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

}
