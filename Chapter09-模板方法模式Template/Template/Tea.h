#pragma once
#include <iostream>
#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
public:
	void brew() override {
		std::cout << "Steeping the tea" << std::endl;
	}

	void addCondiments() override {
		std::cout << "Adding Lemon" << std::endl;
	}
};