#include "ClamPizza.h"
#include <vector>
#include <iostream>
using namespace std;

ClamPizza::ClamPizza(PizzaIngredientFactory* ingredientFactory)
{
	m_ingredientFactory = ingredientFactory;
}

void ClamPizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = m_ingredientFactory->createDough();
	sauce = m_ingredientFactory->createSauce();
	cheese = m_ingredientFactory->createCheese();
	clam = m_ingredientFactory->createClams();
}
