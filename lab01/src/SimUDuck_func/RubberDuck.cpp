#include "stdafx.h"
#include "RubberDuck.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DanceBehavior.h"

using namespace std;


CRubberDuck::CRubberDuck() :
	CDuck(&QuackBehavior::Squeak,
	&FlyBehavior::FlyNoWay,
	&DanceBehavior::DanceNoWay)
{
}


void CRubberDuck::Display() const
{
	cout << "I'm rubber duck" << endl;
}
