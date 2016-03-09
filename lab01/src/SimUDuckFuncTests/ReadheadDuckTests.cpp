#include "stdafx.h"
#include "..\SimUDuck_func\RedheadDuck.h"
#include "..\SimUDuck_func\FlyBehavior.h"
#include "TestsCommon.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(RedheadDuckFunc_)

	struct CreatedDuck
	{
		CRedheadDuck duck;
	};

	BOOST_FIXTURE_TEST_CASE(is_quackable, CreatedDuck)
	{
		TestOutputEquality("Quack Quack!!!\n", [&](){
			duck.Quack();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_swimmable, CreatedDuck)
	{
		TestOutputEquality("I'm swimming\n", [&](){
			duck.Swim();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_flyable, CreatedDuck)
	{
		TestOutputEquality("I'm flying with wings!! It's my flight #1\n", [&](){
			duck.Fly();
		});
		TestOutputEquality("I'm flying with wings!! It's my flight #2\n", [&](){
			duck.Fly();
		});
		TestOutputEquality("I'm flying with wings!! It's my flight #3\n", [&](){
			duck.Fly();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_waltz_dancer, CreatedDuck)
	{
		TestOutputEquality("I'm dancing minuet\n", [&](){
			duck.Dance();
		});
	}

	BOOST_FIXTURE_TEST_CASE(is_displayable, CreatedDuck)
	{
		TestOutputEquality("I'm redhead duck\n", [&](){
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
