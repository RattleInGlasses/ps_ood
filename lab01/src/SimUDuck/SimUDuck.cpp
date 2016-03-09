// SimUDuck.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "FlyWithWings.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DeckoyDuck.h"
#include "RubberDuck.h"
#include "ModelDuck.h"

using namespace std;


void DrawDuck(Duck const& duck)
{
	duck.Display();
}

void PlayWithDuck(Duck & duck)
{
	duck.Quack();
	duck.Dance();
	duck.Fly();
	DrawDuck(duck);
}


void main()
{
	MallardDuck mallarDuck;
	PlayWithDuck(mallarDuck);
	RedheadDuck redheadDuck;
	PlayWithDuck(redheadDuck);
	RubberDuck rubberDuck;
	PlayWithDuck(rubberDuck);
	DeckoyDuck deckoyDuck;
	PlayWithDuck(deckoyDuck);
	ModelDuck modelDuck;
	PlayWithDuck(modelDuck);
	modelDuck.SetFlyBehavior(make_unique<FlyWithWings>());
	PlayWithDuck(modelDuck);
	PlayWithDuck(modelDuck);
}

