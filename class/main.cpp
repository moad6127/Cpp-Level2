
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
class Cat
{
	int mAge;

public:
	int mGetAge()
	{
		//Implicity Object
		// this :��ü�� ������

		//return mAge;
		//Explicity 
		return this->mAge;
	}
};

int main()
{
	Dog Jhon;
	std::cout << GetDogAge(Jhon) << std::endl;

	Cat nacho;
	std::cout << nacho.mGetAge() << std::endl;
}