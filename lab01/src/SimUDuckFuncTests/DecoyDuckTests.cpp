#include "stdafx.h"
#include "..\SimUDuck_func\DecoyDuck.h"
#include "..\SimUDuck_func\FlyBehavior.h"
#include "TestsCommon.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(DecoyDuckFunc_)

	struct CreatedDuck
	{
		CDecoyDuck duck;
	};

	BOOST_FIXTURE_TEST_CASE(is_not_quackable, CreatedDuck)
	{
		TestOutputEquality("", [&](){
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
		TestOutputEquality("I'm decoy duck\n", [&](){
			duck.Display();
		});
	}

	BOOST_FIXTURE_TEST_CASE(can_change_fly_behavior, CreatedDuck)
	{
		duck.SetFlyBehavior(FlyBehavior::FlyNoWay);
		TestOutputEquality("", [&](){
			duck.Fly();
		});
		duck.SetFlyBehavior(FlyBehavior::FlyWithWings());
		TestOutputEquality("I'm flying with wings!! It's my flight #1\n", [&](){
			duck.Fly();
		});
	}

BOOST_AUTO_TEST_SUITE_END()
