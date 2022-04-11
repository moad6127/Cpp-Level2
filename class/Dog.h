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
	
	Dog();
	~Dog();
	BREED GetBreed() const;
	void SetBreed(BREED breed);

	void Roll();
};

