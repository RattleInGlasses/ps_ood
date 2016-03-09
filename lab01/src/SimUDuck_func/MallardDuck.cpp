#include "stdafx.h"
#include "MallardDuck.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DanceBehavior.h"

using namespace std;


CMallardDuck::CMallardDuck() :
	CDuck(&QuackBehavior::Quack,
	FlyBehavior::FlyWithWings(),
	&DanceBehavior::DanceWaltz)
{
}


void CMallardDuck::Display() const
{
	cout << "I'm mallard duck" << endl;
}
