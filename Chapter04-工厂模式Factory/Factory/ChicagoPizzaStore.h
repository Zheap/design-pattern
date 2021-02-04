#pragma once
#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include <iostream>
#include <string>

using namespace std;


class ChicagoPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(string type) override;
};

