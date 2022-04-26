#include<iostream>
#include<fstream>
#include<string>
bool LoadFile(const std::string& filename)
{
	//	1. 파일 스트림 객체 생성
	std::ifstream ifs(filename);

	//ifs.fail()
	if (!ifs)
	{
		std::cout << filename << "을 찾을수 없습니다" << std::endl;
		return false;
	}

	//	2. 파일 작업
	//char ch;
	//while (ifs)
	//{
	//	ifs.get(ch);
	//	std::cout << ch;
	//}
	char ch;
	while (ifs >> ch)
	{
		if (ifs.bad())
		{
			std::cout << "파일이 손상되었습니다." << std::endl;
			ifs.close();
			return false;
		}
		if (ifs.fail())
		{
			std::cout << "의도하지않은 작업 입니다." << std::endl;
			ifs.close();
			return false;
		}
		std::cout << ch;
	}

	//	3. 파일 닫기
	ifs.close();
	return true;
}


int main()
{
	//window
	LoadFile("Data/SimpleData.txt");
	R"(Data\SimpleData.txt)"
	//unix, linux
	"Data/SimpleDate.txt";

	
	//	1. 파일 스트림 객체 생성
	//		1.1 모드를 지정( 읽기/쓰기/텍스트/바이너리 모드 )
	//		1.2 생성자 (파일이름)
	//		1.3 빈오브젝트 생성 -> 파일열기
	
	//	2. 파일 작업
	//		2.1 스트림 연산자
	//		2.2 멤버 함수
	
	//	3. 파일 닫기
}