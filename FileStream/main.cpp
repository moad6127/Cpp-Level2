#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
class Monster
{
private:
	std::string mName;
	int mLevel;
	int mHP;
	int mMP;
public:
	Monster() :
		mName{""},mLevel{},mHP{},mMP{}
	{

	}
	Monster(std::string name, int level, int hp, int mp):
		mName{ name }, mLevel{ level }, mHP{ hp }, mMP{ mp }
	{

	}
	void SetName(std::string name) { mName = name; }
	void SetLevel(int level) { mLevel = level; }
	void SetHP(int hp) { mHP = hp; }
	void SetMP(int mp) { mMP = mp; }

	friend std::ostream& operator <<(std::ostream& os, Monster& mon);
	friend std::istream& operator >>(std::istream& is, Monster& mon);
};
std::ostream& operator <<(std::ostream& os, Monster& mon)
{
	os << mon.mName << "," << mon.mLevel << ","
		<< mon.mHP << "," << mon.mMP<<std::endl;
	return os;
}
std::istream& operator >>(std::istream& ifs, Monster& temp)
{
	std::string buffer;
	try
	{
		std::getline(ifs, buffer, ',');
		temp.mName = buffer;
		std::getline(ifs, buffer, ',');
		temp.SetLevel(std::stoi(buffer));
		std::getline(ifs, buffer, ',');
		temp.SetHP(std::stoi(buffer));
		std::getline(ifs, buffer);
		temp.SetMP(std::stoi(buffer));
	}
	catch (std::exception e)
	{
		std::cout << "문제가 생김..." << e.what() << std::endl;
	}
	return ifs;

}
bool CreateFromFile(const std::string& filename, std::vector<Monster>& v)
{
	//1 스트링 객체
	std::ifstream ifs;
	ifs.exceptions(std::ifstream::badbit);
	try
	{
		//2 파일 열기
		ifs.open(filename);
		//3 파일작업
		std::string buffer;
		
		//헤더 읽고 버리기

		std::getline(ifs, buffer);
		while (!ifs.eof())
		{
			Monster temp;
			ifs >> temp;
			v.push_back(temp);
		}
		//4 파일 닫기
		ifs.close();
	}
	catch (std::ifstream::failure e)
	{
		std::cout << "파일이 잘못되었습니다. : " << e.what() << std::endl;
		ifs.close();
		return false;
	}
	return true;
}
bool SaveToFile(const std::string filename, std::vector<Monster>& v)
{
	//1. 스트링 객체 생성
	std::ofstream ofs;
	ofs.exceptions(std::ofstream::badbit);
	try
	{
		//2. 열기
		ofs.open(filename);
		//3. 작업
		ofs << "--- Monster Data ---" << std::endl;
		for (auto& e : v)
		{
			ofs << e;
		}
		//4. 닫기
		ofs.close();
	}
	catch (std::ostream::failure e)
	{
		std::cout << "파일 저장 도중 문제가 생겼습니다." << e.what() << std::endl;
		ofs.close();
		return false;
	}
	return true;
}
int main()
{
	std::vector<Monster> monsters;
	CreateFromFile("Data/SimpleData.txt", monsters);

	for (auto& e : monsters)
	{
		std::cout << e;
	}

	SaveToFile("Data/NewData.txt", monsters);
}