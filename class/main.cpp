#include<iostream>


//UID : Uniqe IDentifier
//GUID: Globally UID
//UUID: Universally UID

class MyIDGenerator
{
public:
	static int sID;
	static int Create()
	{
		return ++sID;
	}
};
int MyIDGenerator::sID{ 0 };

int main()
{
	std::cout << MyIDGenerator::Create() << std::endl;


}