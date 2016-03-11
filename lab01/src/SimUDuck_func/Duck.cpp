#include "stdafx.h"
#include "Duck.h"

using namespace std;

CDuck::CDuck(std::function<void()> const &quackBehavior,
	std::function<void()> const &flyBehavior,
	std::function<void()> const &danceBehavior) :
	m_quackBehavior(quackBehavior),
	m_danceBehavior(danceBehavior)
{
	assert(quackBehavior);
	assert(danceBehavior);
	SetFlyBehavior(flyBehavior);
}

void CDuck::Swim() const
{
	cout << "I'm swimming" << endl;
}

void CDuck::Quack() const
{
	m_quackBehavior();
}

void CDuck::Fly() const
{
	m_flyBehavior();
}

void CDuck::Dance() const
{
	m_danceBehavior();
}

void CDuck::SetFlyBehavior(std::function<void()> const &flyBehavior)
{
	assert(flyBehavior);
	m_flyBehavior = flyBehavior;
}
