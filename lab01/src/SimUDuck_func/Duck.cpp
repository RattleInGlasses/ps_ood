#include "stdafx.h"
#include "Duck.h"

using namespace std;

CDuck::CDuck(std::function<void()> quackBehavior,
	std::function<void()> flyBehavior,
	std::function<void()> danceBehavior):
	m_quackBehavior(quackBehavior),
	m_flyBehavior(flyBehavior),
	m_danceBehavior(danceBehavior)
{
	assert(quackBehavior);
	assert(danceBehavior);
	SetFlyBehaviour(move(flyBehavior));
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

void CDuck::SetFlyBehaviour(std::function<void()> flyBehaviour)
{
	assert(m_flyBehavior);
	m_flyBehavior = move(flyBehaviour);
}
