#include <iostream>
#include<vector>

int main()
{

	std::vector<int> v{ 1,2,3 };

	std::vector<int>::iterator itr;// �������̴�.

	for (auto e : v)
	{
		std::cout << e << '\n';
	}

	//iterator while
	itr = v.begin();
	// while�� ���� �ϱ�
	while (itr != v.end()) 
	{
		std::cout << *itr << std::endl;
		itr++;
	}
	//for������ �����
	//Ÿ���� �����Ҽ� ������ auto�� ����Ҽ� �ִ�.

	for (auto itr = v.begin(); itr != v.end(); itr++)
	{
		std::cout << *itr << std::endl;
	}

}
