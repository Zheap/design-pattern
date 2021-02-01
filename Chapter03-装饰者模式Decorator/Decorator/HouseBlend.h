#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() { 
		m_description = "House Blend Coffee"; 
	}
	double cost() override;
};

