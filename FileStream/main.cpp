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


int main()
{
	std::vector<Monster> monsters{
		{"JELLY",1,1,1},
		{"WOLF",5,5,5},
		{"DEMON",5,5,5}
	};

	//test
	std::ofstream ofs;
	ofs.open("Data/SimpleData.dat", std::ofstream::binary);
	for (auto& e : monsters)
	{
		ofs << e;
	}
	ofs.close();
}