#include "Monster.h"



std::ifstream& Monster::ReadBinary(std::ifstream& ifs)
{
	//ifs.read();
	return ifs;
}

std::ofstream& Monster::WriteBianry(std::ofstream& ofs)
{
	int len{static_cast<int>( mName.size()) };
	ofs.write(reinterpret_cast<char*>(&len), sizeof(int));

	return ofs;
}
