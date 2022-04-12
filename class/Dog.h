#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	enum BREED
	{
		BEAGEL,DOBERMAN,BERNARD,CHIHUAHUA,HUSKY,RETRIEVER
	};
private:
	BREED mBreed;
public:
	Dog(int age, int weight, BREED breed);
	Dog();
	~Dog();
	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Roll();
	void Sound() override;
};

