#include "stdafx.h"
#include "FlyWithWings.h"

using namespace std;

void FlyWithWings::Fly()
{
	cout << "I'm flying with wings!! It's my flight #" << ++m_flightCount << endl;
}
