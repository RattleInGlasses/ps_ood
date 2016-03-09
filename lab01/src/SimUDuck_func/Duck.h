#pragma once
#include <functional>
class CDuck
{
public:
	CDuck(std::function<void()> quackBehavior,
		std::function<void()> flyBehavior,
		std::function<void()> danceBehavior);
	virtual ~CDuck() = default;
	
	void Swim() const;

	void Quack() const;
	void Fly() const;
	void Dance() const;

	void SetFlyBehaviour(std::function<void()> flyBehaviour);

	virtual void Display() const = 0;

private:
	std::function<void()> m_quackBehavior;
	std::function<void()> m_flyBehavior;
	std::function<void()> m_danceBehavior;
};

