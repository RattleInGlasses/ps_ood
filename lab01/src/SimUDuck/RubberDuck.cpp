#include "stdafx.h"
#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "QuackBehavior.h"
#include "DanceNoWay.h"

using namespace std;


RubberDuck::RubberDuck()
	: Duck(make_unique<FlyNoWay>(),
	make_unique<QuackBehavior>(),
	make_unique<DanceNoWay>())
{
}


void RubberDuck::Display() const
{
	cout << "I'm rubber duck" << endl;
}
