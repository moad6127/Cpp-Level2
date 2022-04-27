#include<iostream>
#include<fstream>
#include<string>
bool LoadFile(const std::string& filename)
{
	//	1. ���� ��Ʈ�� ��ü ����
	std::ifstream ifs;
	ifs.exceptions( std::ifstream::badbit);

	try
	{
		//���� �б�
		ifs.open(filename);

		char ch;
		while (ifs.get(ch))
		{
			std::cout << ch;
		}

		//	3. ���� �ݱ�
		ifs.close();

	}
	catch (std::ifstream::failure e)
	{
		std::cout << "���� �۾� ���� ������ �߻��߽��ϴ�." << std::endl;
		std::cout << e.code() << std::endl;
		std::cout <<e.what() << std::endl;

		ifs.close();
		return false;
	}
	return true;

}


int main()
{
	//window
	LoadFile("Data/SimpleData.txt");
	R"(Data\SimpleData.txt)"
	//unix, linux
	"Data/SimpleDate.txt";

	
	//	1. ���� ��Ʈ�� ��ü ����
	//		1.1 ��带 ����( �б�/����/�ؽ�Ʈ/���̳ʸ� ��� )
	//		1.2 ������ (�����̸�)
	//		1.3 �������Ʈ ���� -> ���Ͽ���
	
	//	2. ���� �۾�
	//		2.1 ��Ʈ�� ������
	//		2.2 ��� �Լ�
	
	//	3. ���� �ݱ�
}