#include "stdafx.h"
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "QuackBehavior.h"
#include "DanceNoWay.h"

using namespace std;


ModelDuck::ModelDuck()
	: Duck(make_unique<FlyNoWay>(),
	make_unique<QuackBehavior>(),
	make_unique<DanceNoWay>())
{
}


void ModelDuck::Display() const
{
	cout << "I'm model duck" << endl;
}
