#include<iostream>
#include<vector>
#include"Monster.h"

std::ifstream& operator>> (std::ifstream& ifs, Monster& monster)
{
	return monster.ReadBinary(ifs);

}
std::ofstream& operator<<(std::ofstream& ofs, Monster& monster)
{
	return monster.WriteBianry(ofs);
}

struct Header
{
	int version{ 1 };
	int monsterCount{};
};


bool SaveToFile(const std::string& fileName, std::vector<Monster> monsters)
{
	std::ofstream ofs;
	ofs.exceptions(std::ofstream::badbit | std::ofstream::failbit);
	try
	{
		ofs.open(fileName, std::ofstream::binary);
		Header h{ 1,monsters.size() };
		ofs.write(reinterpret_cast<char*>(&h), sizeof(Header));

		for (auto& e : monsters)
		{
			ofs << e;
		}
		ofs.close();
	}
	catch(std::ofstream::failure e)
	{
		std::cout << "저장도중 예외가 발생 : " << e.what() << std::endl;
		ofs.close();
		return false;
	}
	return true;
}
bool LoadFromFile(const std::string& fileName, std::vector<Monster>monsters)
{
	return true;
}
int main()
{
	std::vector<Monster> monsters{
		{"JELLY",1,1,1},
		{"WOLF",5,5,5},
		{"DEMON",10,10,10}
	};
	SaveToFile("Data/SimpleData.dat", monsters);

}