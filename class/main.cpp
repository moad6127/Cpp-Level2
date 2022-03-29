
#include<iostream>

struct Dog
{
	int age;
};

int GetDogAge(Dog& dog)
{
	return dog.age;
}
//-------------------------------

int main()
{
	Dog Jhon;
	std::cout << GetDogAge(Jhon) << std::endl;

	Cat nacho;
	std::cout << nacho.mGetAge() << std::endl;
}