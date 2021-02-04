#include "CheesePizza.h"
#include <iostream>
using namespace std;

CheesePizza::CheesePizza(PizzaIngredientFactory* ingredientFactory)
{
	m_ingredientFactory = ingredientFactory;
}

void CheesePizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = m_ingredientFactory->createDough();
	sauce = m_ingredientFactory->createSauce();
	cheese = m_ingredientFactory->createCheese();
}
