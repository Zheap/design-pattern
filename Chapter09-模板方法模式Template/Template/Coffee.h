#pragma once
#include <iostream>
#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
public:
	void brew() override {
		std::cout << "Dripping Coffee through filter" << std::endl;
	}

	void addCondiments() override {
		std::cout << "Adding Sugar and Milk" << std::endl;
	}
};