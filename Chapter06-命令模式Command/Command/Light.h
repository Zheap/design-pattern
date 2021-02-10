#pragma once
#include <string>
class Light
{
public:
	Light(std::string name) {
		m_name = name;
	}
	void on();
	void off();

protected:
	std::string m_name;
};

