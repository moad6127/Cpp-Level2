#include <iostream>
#include<vector>
#include<algorithm>

//int compare(const void* left, const void* right)
//{
//	int arg1 = *static_cast<const int*> (left);
//	int arg2 = *static_cast<const int*>(right);
//
//	return arg1- arg2;
//}


int main()
{
	std::vector<int> v{5,4,3,2,1 };

	//C-style
	std::qsort(&v[0],v.size(),sizeof(int),
				[](const void* left , const void* right) ->int
				{
				int arg1 = *static_cast<const int*> (left);
				int arg2 = *static_cast<const int*>(right);

				return arg1 - arg2; 
				}
	);

	//C++ style
	//std::sort(v.begin(), v.end());


	for (const auto& e : v)
	{
		std::cout << e << std::endl;
	}
}
