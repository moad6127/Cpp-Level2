#include <iostream>

class CPU
{

};
class Keyboard
{

};
class Notebook
{
public:
	CPU mCPU;				// is-part-of : ��� ����ȭ
	Keyboard* mKeyboard;	// has-a : ��� ������ ����ȭ
	
	User* mpUser;			// use-a : ��� ������ ����ȭ
};

int main()
{


}
