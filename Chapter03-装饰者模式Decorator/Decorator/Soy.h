#pragma once
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* beverage);
	std::string getDescription() override;
	double cost() override;
	
protected:
	Beverage* m_beverage;
};

