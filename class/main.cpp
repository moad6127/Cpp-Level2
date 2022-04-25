#include<iostream>

void Function()
{
	//base
	std::cout << "---end---" << std::endl;
}
template<typename T, typename... Types>
void Function(T arg, Types... args)
{
	std::cout << arg << " ";
	//recursive
	Function(args...);
}

int main()
{
	Function(1, 2, 3);
	Function(1, 1.0, "abc");
}



////Factory Pattern

//Warrior* Make();
//Archer* Make(int arg1);
//Wizard* Make(int arg1, int arg2);
//Thief* Make(double arg1);

//template<typename T, typename... Types>
//T* Make(Types... arg)
//{
//	return T(args...);
//}
