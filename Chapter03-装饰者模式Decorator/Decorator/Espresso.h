#pragma once
#include "Beverage.h"
class Espresso : public Beverage
{
public:
	Espresso() { 
		m_description = "Espresso"; 
	}
	double cost() override;
};

