#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
int main()
{
	//std::stack<int> container;
	//container.push(1);
	//container.push(2);
	//container.push(3);
	//container.pop();

	//std::queue<int> container;
	//container.push(1);
	//container.push(2);
	//container.push(3);
	
	std::priority_queue<int> q;
	q.push(1);
	q.push(1);
	q.push(2);
	q.push(2);
	q.push(3);
	q.push(2);
	q.push(1);
	std::cout << q.top() << std::endl;
	q.pop();
	std::cout << q.top() << std::endl;
	//for (const auto& e : container)
	//{
	//	std::cout << e << " ";
	//}
	/*for (int i = 0; i < container.size(); i++)
	{
		std::cout << container[i] << " ";
	}*/

	std::cout << std::endl;
}
