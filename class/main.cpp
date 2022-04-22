#include<iostream>

enum class MyEnum1
{
	Color =1,
	Alpha =2
};
enum class MyEnum2
{
	Color =1
};
int main()
{
	MyEnum1::Color;
	MyEnum2::Color;
}
