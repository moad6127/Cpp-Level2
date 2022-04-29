#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<regex>
class Sprite
{
public:
	std::string n;
	int			x;
	int			y;
	int			w;
	int			h;
};

void LoadXML(const std::string& filename, std::vector<Sprite>& sprites)
{
	std::ifstream file(filename,std::ifstream::binary);

	std::string line;
	std::regex pattern("\"([^\"]*)\"");
	while (!file.eof())
	{
		std::getline(file, line);

		auto result = line.find("<sprite");
		if (result != std::string::npos)
		{
			std::sregex_iterator current(line.begin(), line.end(), pattern);
			std::sregex_iterator end;

			while (current != end)
			{
				std::cout << ( * current)[1] <<" ";
				current++;
			}
			std::cout << line << std::endl;
		}
	}
}
int main()
{
	std::vector<Sprite> sprites;
		LoadXML("data/mydata.xml", sprites);
}