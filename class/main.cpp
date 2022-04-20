#include<iostream>
#include<list>
#include<deque>
#include<algorithm>

int main()
{
	std::deque<int> container{ 3,4,5 };
	container;
	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}
