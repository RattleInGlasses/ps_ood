#pragma once
#include "Duck.h"
class CRubberDuck :
	public CDuck
{
public:
	CRubberDuck();
	~CRubberDuck() = default;

	void Display() const override;
};

