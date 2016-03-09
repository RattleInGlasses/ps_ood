#pragma once
#include "IFlyBehavior.h"
class FlyWithWings :
	public IFlyBehavior
{
public:
	void Fly() override;
private:
	unsigned int m_flightCount = 0;
};

