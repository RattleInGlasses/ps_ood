#include "stdafx.h"
#include "DeckoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuackBehavior.h"
#include "DanceNoWay.h"

using namespace std;


DeckoyDuck::DeckoyDuck()
	: Duck(make_unique<FlyNoWay>(), 
	make_unique<MuteQuackBehavior>(),
	make_unique<DanceNoWay>())
{
}


void DeckoyDuck::Display() const
{
	cout << "I'm deckoy duck" << endl;
}
