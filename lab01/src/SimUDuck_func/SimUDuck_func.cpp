// SimUDuck_func.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "FlyBehavior.h"

using namespace std;

void DrawDuck(CDuck const &duck)
{
	duck.Display();
}

void PlayWithDuck(CDuck &duck)
{
	duck.Quack();
	duck.Dance();
	duck.Fly();
	DrawDuck(duck);
}

int main()
{
	CMallardDuck mallardDuck;
	PlayWithDuck(mallardDuck);
	CRedheadDuck redheadDuck;
	PlayWithDuck(redheadDuck);
	CRubberDuck rubberDuck;
	PlayWithDuck(rubberDuck);
	CDecoyDuck decoyDuck;
	PlayWithDuck(decoyDuck);
	CModelDuck modelDuck;
	PlayWithDuck(modelDuck);
	modelDuck.SetFlyBehaviour(FlyBehavior::FlyWithWings());
	PlayWithDuck(modelDuck);
	PlayWithDuck(modelDuck);

	return 0;
}