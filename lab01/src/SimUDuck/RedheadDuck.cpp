#include "stdafx.h"
#include "RedheadDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"
#include "DanceMinuet.h"

using namespace std;


RedheadDuck::RedheadDuck()
	: Duck(make_unique<FlyWithWings>(), 
	make_unique<QuackBehavior>(),
	make_unique<DanceMinuet>())
{
}


void RedheadDuck::Display() const
{
	cout << "I'm redhead duck" << endl;
}
