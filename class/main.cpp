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
	CPU mCPU;				// is-part-of : 멤버 변수화
	Keyboard* mKeyboard;	// has-a : 멤버 포인터 변수화
	
	User* mpUser;			// use-a : 멤버 포인터 변수화
};

int main()
{


}
