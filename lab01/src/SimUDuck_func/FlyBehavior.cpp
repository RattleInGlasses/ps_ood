#include "stdafx.h"
#include "FlyBehavior.h"

using namespace std;

void FlyBehavior::FlyWithWings::operator()()
{
	cout << "I'm flying with wings!! It's my flight #" << ++m_flightCount << endl;
}


void FlyBehavior::FlyNoWay()
{
}
