#include <iostream>
#include <string>
#include "CaffeineBeverage.h"
#include "Tea.h"
#include "Coffee.h"
#include "CoffeeWithHook.h"

int main()
{
	Tea* m_tea = new Tea();
	m_tea->prepareRecipe();

	std::cout << std::endl;

	CoffeeWithHook* coffeeHook = new CoffeeWithHook();
	coffeeHook->prepareRecipe();

	return 0;
}