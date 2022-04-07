#include <iostream>

class Charater
{
public:
	Charater& Move()
	{
		std::cout << "Move" << std::endl;
		return *this;
	}
	Charater& TurnLeft()
	{
		std::cout << "TurnLeft" << std::endl;
		return *this;
	}
	Charater& TurnRigth()
	{
		std::cout << "TurnRigth" << std::endl;
		return *this;
	}
};
int main()
{
	Charater player;
	player.Move().TurnLeft().TurnRigth();
}