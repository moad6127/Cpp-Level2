#include <iostream>
#include<vector>
#include<algorithm>

int compare(const void* left, const void* right)
{
	int arg1 = *static_cast<const int*> (left);
	int arg2 = *static_cast<const int*>(right);
	//if (arg1 > arg2)
	//{
	//	return -1;
	//}
	//else if (arg1 < arg2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
	return arg1- arg2;
}
int main()
{
	std::vector<int> v{5,4,3,2,1 };

	//C-style
	//std::qsort(&v[0],v.size(),sizeof(int),compare);

	//C++ style
	std::sort(v.begin(), v.end());


	for (const auto& e : v)
	{
		std::cout << e << std::endl;
	}
}
