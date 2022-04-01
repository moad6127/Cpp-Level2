#include<iostream>

	class MyArray
	{
	private:
		int mLength;
		int* mArray;

	public:
		MyArray(int length) : mLength{ length }
		{
			mArray = new int[length] {};
		}
		~MyArray()
		{
			delete[] mArray;
			mArray = nullptr;
		}
	
	};

	int main()
	{
		MyArray array{ 20 };
	}