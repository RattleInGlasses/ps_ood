#include "stdafx.h"
#include "RedheadDuck.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DanceBehavior.h"

using namespace std;


CRedheadDuck::CRedheadDuck() :
	CDuck(&QuackBehavior::Quack,
	FlyBehavior::FlyWithWings(),
	&DanceBehavior::DanceMinuet)
{
}


void CRedheadDuck::Display() const
{
	cout << "I'm redhead duck" << endl;
}