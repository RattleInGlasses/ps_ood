#include "stdafx.h"
#include "Duck.h"

using namespace std;

Duck::Duck(std::unique_ptr<IFlyBehavior> && flyBehavior, 
	std::unique_ptr<IQuackBehavior> && quackBehavior,
	std::unique_ptr<IDanceBehavior> && danceBehavior)
	: m_quackBehavior(move(quackBehavior)),
	m_danceBehavior(move(danceBehavior))
{
	assert(m_quackBehavior);
	assert(m_danceBehavior);
	SetFlyBehavior(move(flyBehavior));
}


void Duck::Quack() const
{
	m_quackBehavior->Quack();
}


void Duck::Swim()
{
	cout << "I'm swimming" << endl;
}


void Duck::Fly()
{
	m_flyBehavior->Fly();
}


void Duck::Dance()
{
	m_danceBehavior->Dance();
}


void Duck::SetFlyBehavior(std::unique_ptr<IFlyBehavior> && flyBehavior)
{
	assert(flyBehavior);
	m_flyBehavior = move(flyBehavior);
}

