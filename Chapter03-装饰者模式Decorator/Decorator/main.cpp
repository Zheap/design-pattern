#include <iostream>
#include "Beverage.h"
#include "CondimentDecorator.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

int main()
{
	Beverage* beverage = new Espresso();
	std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

	Beverage* beverage2 = new Espresso();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

	Beverage* beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;

	return 0;
}