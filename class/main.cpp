#include <iostream>
#include<vector>

int main()
{
	//vector :  ���ӵ� n���� ��<����>
	//std::vector<int> v1{ 2,3,1,5,6 };
	//v1.push_back(4);
	//
	////range-base loop [0 : siez)
	//for (int elemmnt : v1)
	//{
	//	std::cout << elemmnt << std::endl;
	//}

	//���ڵ��� �Է� �ް� ���հ�� ����� ���غ���
	//��) 1 2 3 6 4 8 0 4 10 d
	//���ڸ� �������� �����Ͽ� �Է�
	//�Է� ����� ���ڰ� �ƴ� ���ڸ� �Է�
	std::vector<int> vScore;
	int value;
	std::cout << "���ڸ� �Է��ϼ��� : " << std::endl;
	while (std::cin >> value)
	{
		vScore.push_back(value);
	}
	int Sum{};
	float average{};
	for (int e : vScore)
	{
		Sum += e;
	}
	average = static_cast<float>(Sum) / vScore.size();
	std::cout <<"�հ� : " << Sum << std::endl;
	std::cout <<"��� : " << average << std::endl;
}
