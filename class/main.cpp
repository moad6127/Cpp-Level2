#include<iostream>

class MyClass
{
public:
	int x[100];
};
template<typename T>
void Swap(T& a, T& b)
{
	T temp = std::move(a);
	a =std::move( b) ;
	b= std::move(temp) ;
}
int main()
{
	int x{ 10 }, y{ 20 };
	Swap<int>(x, y);
	std::cout << x << " : " << y << std::endl;
}
