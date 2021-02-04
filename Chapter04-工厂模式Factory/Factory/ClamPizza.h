#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class ClamPizza : public Pizza
{
public:
	ClamPizza(PizzaIngredientFactory* ingredientFactory);
	void prepare() override;

protected:
	PizzaIngredientFactory* m_ingredientFactory;
};

