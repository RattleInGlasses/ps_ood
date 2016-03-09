#include "stdafx.h"
#include "ModelDuck.h"
#include "QuackBehavior.h"
#include "FlyBehavior.h"
#include "DanceBehavior.h"

using namespace std;


CModelDuck::CModelDuck() : 
	CDuck(&QuackBehavior::Quack,
	&FlyBehavior::FlyNoWay,
	&DanceBehavior::DanceNoWay)
{
}


void CModelDuck::Display() const
{
	cout << "I'm model duck" << endl;
}
