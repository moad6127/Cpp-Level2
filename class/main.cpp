#include<iostream>

int main()
{
	// "'/'" �� ����غ���
	std::string str = " \" \' \\ \' \" ";

	// Raw String Literal
	std::string str2 = R"("'\'")";
	std::cout << str2 << std::endl;
	std::string str3 = R"(
	"Hello",
	"My Name Is DSEFSEFSE"
	)";
	std::cout << str3 << std::endl;
}
