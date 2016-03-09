#pragma once
#include "Duck.h"
class CModelDuck :
	public CDuck
{
public:
	CModelDuck();
	~CModelDuck() = default;

	void Display() const override;
};

