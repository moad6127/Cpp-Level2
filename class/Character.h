#pragma once
class Character
{
protected:
	int mHP;

public:
	Character();
	virtual ~Character();

	virtual void Attack() const;

};

