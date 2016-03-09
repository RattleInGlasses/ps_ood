#include "stdafx.h"
#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "QuackBehavior.h"
#include "DanceWaltz.h"

using namespace std;


MallardDuck::MallardDuck()
	: Duck(make_unique<FlyWithWings>(), 
	make_unique<QuackBehavior>(), 
	make_unique<DanceWaltz>())
{
}


void MallardDuck::Display() const
{
	cout << "I'm mallard duck" << endl;
}
