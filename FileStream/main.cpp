#include<iostream>
#include<fstream>
#include<string>
bool LoadFile(const std::string& filename)
{
	//	1. ���� ��Ʈ�� ��ü ����
	std::ifstream ifs(filename);

	//ifs.fail()
	if (!ifs)
	{
		std::cout << filename << "�� ã���� �����ϴ�" << std::endl;
		return false;
	}

	//	2. ���� �۾�
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
			std::cout << "������ �ջ�Ǿ����ϴ�." << std::endl;
			ifs.close();
			return false;
		}
		if (ifs.fail())
		{
			std::cout << "�ǵ��������� �۾� �Դϴ�." << std::endl;
			ifs.close();
			return false;
		}
		std::cout << ch;
	}

	//	3. ���� �ݱ�
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

	
	//	1. ���� ��Ʈ�� ��ü ����
	//		1.1 ��带 ����( �б�/����/�ؽ�Ʈ/���̳ʸ� ��� )
	//		1.2 ������ (�����̸�)
	//		1.3 �������Ʈ ���� -> ���Ͽ���
	
	//	2. ���� �۾�
	//		2.1 ��Ʈ�� ������
	//		2.2 ��� �Լ�
	
	//	3. ���� �ݱ�
}