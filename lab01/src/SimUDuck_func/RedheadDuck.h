#pragma once
#include "Duck.h"
class CRedheadDuck :
	public CDuck
{
public:
	CRedheadDuck();
	~CRedheadDuck() = default;

	void Display() const override;
};

