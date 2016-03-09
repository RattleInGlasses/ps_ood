#pragma once
#include <iostream>
#include <functional>

struct cout_redirect
{
	cout_redirect(std::streambuf *new_buffer);
	~cout_redirect();
private:
	std::streambuf *m_old;
};

void TestOutputEquality(std::string const &value, std::function<void()> testFunc);
