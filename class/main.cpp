#include<iostream>
#include<thread>
#include<mutex>

//mutual exclusion : mutex
std::mutex gMutex;

//Work A
void PrintInt()
{
	int i = 0;
	while (i < 500)
	{
		if (gMutex.try_lock())
		{
			std::cout << "Work1 : " << i << std::endl;
			++i;
			gMutex.unlock();
		}
		else
		{
			//대기
		}
	}
}

//Work B
void PrintAscii()
{
	for (int repeat = 0; repeat < 5; repeat++)
	{
		int i = 33;
		while(i<126)
		{
			if (gMutex.try_lock())
			{
				std::cout << "Work2 : " << (char)(i) << std::endl;
				i++;
				gMutex.unlock();
			}
			else
			{
				//대기
			}
		}
	}
}
int main()
{
	std::thread worker1(PrintInt);
	std::thread worker2(PrintAscii);
	
	worker1.join();
	worker2.join();

	std::cout << "---모든 작업이 끝났습니다--" << std::endl;
}