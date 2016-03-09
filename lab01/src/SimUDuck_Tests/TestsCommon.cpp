#include "stdafx.h"
#include "TestsCommon.h"

using namespace std;

cout_redirect::cout_redirect(std::streambuf *new_buffer)
	: m_old(std::cout.rdbuf(new_buffer))
{}

cout_redirect::~cout_redirect()
{
	cout.rdbuf(m_old);
}


void TestOutputEquality(string const &value, function<void()> testFunc)
{
	boost::test_tools::output_test_stream output;
	{
		cout_redirect redirect(output.rdbuf());
		testFunc();
	}
	BOOST_CHECK(output.is_equal(value));
}
