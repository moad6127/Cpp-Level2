#include <iostream>
#include<vector>

int main()
{
	std::vector<int> v{ 1,2,3,4,5, };

	//range besed for
	//��κ��� ���
	for (int& e : v) // ���������� ����� v�� ���Ҹ� �ٲܼ��ְ� �ȴ�.
	{
		e = 1;
	}
	//index for loop
	//�ε����� �ʿ��� ���
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout << v[i] << std::endl;
	}

	//STL�� ���õ� ��� �۾�

	std::vector<int>::iterator itr = v.begin();
	while (itr != v.end())
	{
		*itr = 1;
		std::cout << *itr << std::endl;
		itr++;
	}

	for (const auto& e : v) //�̷��� �ϸ� v�� ���� �����Ҽ� ����.
	{
		std::cout << e << std::endl;
	}
}
