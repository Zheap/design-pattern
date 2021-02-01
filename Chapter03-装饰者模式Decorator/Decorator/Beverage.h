#pragma once
#include <string>
class Beverage
{
public:
	virtual std::string getDescription();
	virtual double cost() = 0;

protected:
	std::string m_description = "Unknown Beverage";
};

