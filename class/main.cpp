#include <iostream>
#include <string>
void Print(const std::string& str)
{
	std::cout << str.size() << " : " << str << std::endl;
}
int main()
{

	std::string empty;
	Print(empty);
	std::string sized(10, '1');
	Print(sized);
	std::string s1("test");
	std::cout << s1[0] << s1[1] << s1[2] << s1[3] << std::endl;


	std::string s2(s1);
	Print(s2);

	std::string s3 = s1 + s2;
	Print(s3);
	empty = s3;
	Print(empty);

	empty = empty;
	Print(empty);

	int number = 123;
	std::string numString;
	numString = std::to_string(number);		//123 ->"123"
	number = std::stoi(numString);			//"123" ->123

	//std::string s1{ "abcd" };
	//std::string s2{ "1234" };

	//std::string s3{ s1 + s2 };
	//s1 = s2;
	//s2 = std::string("hello") + std::string("world");
	//s1 += s2;

	//s2[0] = 'H';
	//if (s1 == s2) //s1 != s2, s1>s2 가능하다
	//{

	//}
	//s1.c_str(); //C스타일의 문자열을 만듬(캐릭터포인터)

	//////container 특성
	//s1.size();
	//s1.insert();
	//s1.append();
	//s1.erase();
	//s1.find(2);

	////iterator
	//s1.begin();
	//s1.end();
	//
	//std::cout << s1;
	//std::cin >> s1;
}
