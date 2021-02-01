#pragma once
#include "Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	virtual std::string getDescription() override = 0;
};

