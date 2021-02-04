#pragma once
#include <iostream>
#include <string>
#include "Pizza.h"

using namespace std;

class PizzaStore
{
public:
	Pizza* orderPizza(string type);

protected:
	virtual Pizza* createPizza(string type) = 0;

};

