#pragma once
#include "Pizza.h"
#include "PizzaIngredientFactory.h"


class CheesePizza : public Pizza
{
public:
	CheesePizza(PizzaIngredientFactory* ingredientFactory);
	void prepare() override;

protected:
	PizzaIngredientFactory* m_ingredientFactory;
};

