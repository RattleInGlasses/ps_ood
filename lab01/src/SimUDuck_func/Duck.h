#pragma once
#include <functional>
class CDuck
{
public:
	CDuck(std::function<void()> const &quackBehavior,
		std::function<void()> const &flyBehavior,
		std::function<void()> const &danceBehavior);
	virtual ~CDuck() = default;
	
	void Swim() const;

	void Quack() const;
	void Fly() const;
	void Dance() const;

	void SetFlyBehavior(std::function<void()> const &flyBehavior);

	virtual void Display() const = 0;

private:
	std::function<void()> m_quackBehavior;
	std::function<void()> m_flyBehavior;
	std::function<void()> m_danceBehavior;
};

