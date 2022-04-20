#include<iostream>
#include<algorithm>
#include<set>
#include<map>
using MyPiar = std::pair<std::string, std::string>;
int main()
{
	//std::set<int> container{8,3,1,6,10,27,4,5,8,8,8};

	/*for (const auto& e : container)
	{
		std::cout << e << std::endl;
	}
*/
	std::map<std::string, std::string> container;
	//"array" : "단순배열"
	//"vector" : "동적 배열"
	//"stack"  : "LIFO구조"
	std::pair<std::string, std::string> element;
	element.first = "array";
	element.second = "Simple Static Array";
	container.insert(element);

	//constructor
	container.insert(std::pair<std::string, std::string>("vector", "Dynamic Array"));

	//using alias
	container.insert(MyPiar("stack", "LIFO"));

	//uniform initialization
	container.insert({ "queue", "FIFO" });

	
	for (const auto& e : container)
	{
		std::cout << e.first << " : " << e.second << std::endl;
	}

	std::cout << container.at("array") << std::endl;
	std::cout << container["array"] << std::endl;
}
