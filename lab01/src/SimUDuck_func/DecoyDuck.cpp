#include "stdafx.h"
#include "DecoyDuck.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DanceBehavior.h"

using namespace std;


CDecoyDuck::CDecoyDuck() :
	CDuck(&QuackBehavior::MuteQuack,
	&FlyBehavior::FlyNoWay,
	&DanceBehavior::DanceNoWay)
{
}


void CDecoyDuck::Display() const
{
	cout << "I'm decoy duck" << endl;
}
