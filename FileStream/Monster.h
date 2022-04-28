#pragma once
#include<fstream>
#include<string>

class Monster
{
private:
	std::string mName;
	int mLevel;
	int mHP;
	int mMP;

public:
	Monster() : Monster("", 0, 0, 0)
	{

	}
	Monster(std::string name, int level, int hp, int mp) :
		mName{ name }, mLevel{ level }, mHP{ hp }, mMP{ mp }
	{

	}

	std::ifstream& ReadBinary(std::ifstream& ifs);

	std::ofstream& WriteBianry(std::ofstream& ofs);

};

