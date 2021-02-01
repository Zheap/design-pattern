#include "Soy.h"


Soy::Soy(Beverage* beverage)
{
	m_beverage = beverage;
}

std::string Soy::getDescription()
{
	return m_beverage->getDescription() + ", Soy";
}

double Soy::cost()
{
	return 0.15 + m_beverage->cost();
}
