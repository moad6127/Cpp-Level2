#include <iostream>

using namespace std;
using namespace Character;


namespace Character
{
	class Warrior
	{
	public:
		void DoulbeSlash();
	};
	//�÷��̾��� ������ ���
	void Print()
	{

	}
}

void Print()
{
	std::cout << "Global!" << std::endl;
}
int main()
{
	Warrior player;
	player.DoulbeSlash();
	Character::Print();
	::Print();
}
