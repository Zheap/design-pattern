#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* beverage);   
	std::string getDescription() override;
	double cost() override;
protected:
	Beverage* m_beverage;
};

