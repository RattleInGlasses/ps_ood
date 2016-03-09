#pragma once
#include "Duck.h"
class CMallardDuck :
	public CDuck
{
public:
	CMallardDuck();
	~CMallardDuck() = default;

	void Display() const override;
};

