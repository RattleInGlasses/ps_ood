#include "stdafx.h"
#include "FlyBehavior.h"

using namespace std;

namespace FlyBehavior
{
	void FlyWithWings::operator()()
	{
		cout << "I'm flying with wings!! It's my flight #" << ++m_flightCount << endl;
	}


	void FlyNoWay()
	{
	}
}
