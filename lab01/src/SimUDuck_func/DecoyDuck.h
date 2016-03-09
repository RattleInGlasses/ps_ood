#pragma once
#include "Duck.h"
class CDecoyDuck :
	public CDuck
{
public:
	CDecoyDuck();
	~CDecoyDuck() = default;

	void Display() const override;
};

