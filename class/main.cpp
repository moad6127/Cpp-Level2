#include<iostream>
#include<list>
#include<algorithm>

int main()
{
	std::list<int> container{ 3,2,1 };

	std::list<int>container2{ 4,5,6 };
	container.sort();
	container2.sort();
	container.merge(container2); //둘다 정렬이 되어있지않으면 에러가 난다.

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}
