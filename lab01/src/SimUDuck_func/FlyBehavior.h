#pragma once

namespace FlyBehavior
{
	void FlyNoWay();

	class FlyWithWings
	{
	public:
		void operator ()();
	private:
		unsigned int m_flightCount = 0;
	};
}
