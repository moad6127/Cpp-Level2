#include<iostream>

class Counter
{
public:
	static int sCount;
	void Count()
	{
		std::cout << sCount++ << std::endl;
	}
};

int Counter::sCount = 1;

int main()
{
	Counter c1, c2, c3;
	c1.Count();
	c2.Count();
	c3.Count();

	std::cout << Counter::sCount << std::endl;
}