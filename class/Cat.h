#pragma once
class Cat
{
private:
	int mAge;
	//constant menmber variable
	const int FOOT_COUNT = 4;
public:
	//constant member function
	void Meow() const;
	int GetAge() const; //Getter
	void SetAge(int age); //Setter

};

