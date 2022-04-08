#include <iostream>
//게임 개발자
class GameDeveloper
{
public:
	std::string mName;
	int mAge;
};

class Programmer : public GameDeveloper
{

public:
	void Coding();
	void Debugging();
};
class Designer : public GameDeveloper
{
public:
	void Documentation();
	void Presentation();
};
class ChiefProgrammer :	public Programmer
{
public:
	void Architecture();
	void Scheduling();
};
class ChiefDesinger : public Designer
{
public:
	void Meeting();
	void Scheduling();
};

int main()
{

}
