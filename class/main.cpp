#include <iostream>
#include<vector>

int main()
{
	std::vector<int> v{ 1,2,3,4,5, };

	//range besed for
	//대부분의 경우
	for (int& e : v) // 참조형으로 만들면 v의 원소를 바꿀수있게 된다.
	{
		e = 1;
	}
	//index for loop
	//인덱스가 필요한 경우
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << std::endl;
	}

	//STL과 관련된 모든 작업

	std::vector<int>::iterator itr = v.begin();
	while (itr != v.end())
	{
		*itr = 1;
		std::cout << *itr << std::endl;
		itr++;
	}

	for (const auto& e : v) //이렇게 하면 v의 값을 변경할수 없다.
	{
		std::cout << e << std::endl;
	}
}
