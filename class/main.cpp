#include <iostream>
#include<array>
#include<vector>


int main()
{
	//std::array<int, 4> container{ 0,1,2,3 };
	std::vector<int> container{0,1,2,3,4};
	//
	//container.push_back(5);
	//container.pop_back();
	//container.erase(container.begin());
	container.resize(12,4);
	container.clear();

	for (const auto& e : container)
	{
		std::cout << e << " ";
	}
	std::cout << "\n";
	for (auto itr = container.begin(); itr != container.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < container.size(); i++)
	{
		std::cout << container[i] << " ";
	}
	std::cout << "\n";
}
