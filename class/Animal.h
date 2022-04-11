#pragma once
class Animal
{
protected:
	int mAge;
	int mWeight;
public:
	Animal(int age, int weight);
	Animal();
	~Animal();

	int GetAge() const;
	void SetAge(int age);
	int GetWeight()const;
	void SetWeight(int weight);

	void Sound();
};

