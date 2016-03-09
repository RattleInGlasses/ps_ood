#include "stdafx.h"
#include "..\SimUDuck_func\RubberDuck.h"
#include "..\SimUDuck_func\FlyBehavior.h"
#include "TestsCommon.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(RubberDuckFunc_)

	struct CreatedDuck
	{
		CRubberDuck duck;
	};

	BOOST_FIXTURE_TEST_CASE(is_quackable, CreatedDuck)
	{
		TestOutputEquality("Squeak!!!\n", [&](){
			duck.Quack();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_swimmable, CreatedDuck)
	{
		TestOutputEquality("I'm swimming\n", [&](){
			duck.Swim();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_not_flyable, CreatedDuck)
	{
		TestOutputEquality("", [&](){
			duck.Fly();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_not_dancer, CreatedDuck)
	{
		TestOutputEquality("", [&](){
			duck.Dance();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_displayable, CreatedDuck)
	{
		TestOutputEquality("I'm rubber duck\n", [&](){
			duck.Display();
		});
	}

	BOOST_FIXTURE_TEST_CASE(can_change_fly_behavior, CreatedDuck)
	{
		duck.SetFlyBehaviour(FlyBehavior::FlyNoWay);
		TestOutputEquality("", [&](){
			duck.Fly();
		});
		duck.SetFlyBehaviour(FlyBehavior::FlyWithWings());
		TestOutputEquality("I'm flying with wings!! It's my flight #1\n", [&](){
			duck.Fly();
		});
	}

BOOST_AUTO_TEST_SUITE_END()
