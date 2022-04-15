#include <iostream>
#include<vector>

int main()
{
	//vector :  연속된 n개의 값<집합>
	//std::vector<int> v1{ 2,3,1,5,6 };
	//v1.push_back(4);
	//
	////range-base loop [0 : siez)
	//for (int elemmnt : v1)
	//{
	//	std::cout << elemmnt << std::endl;
	//}

	//숫자들을 입력 받고 총합계와 평균을 구해보기
	//예) 1 2 3 6 4 8 0 4 10 d
	//숫자를 공백으로 구분하여 입력
	//입력 종료는 수자가 아닌 문자를 입력
	std::vector<int> vScore;
	int value;
	std::cout << "숫자를 입력하세요 : " << std::endl;
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
	std::cout <<"합계 : " << Sum << std::endl;
	std::cout <<"평균 : " << average << std::endl;
}
