#include "Whip.h"

Whip::Whip(Beverage* beverage)
{
	m_beverage = beverage;
}

std::string Whip::getDescription()
{
	return m_beverage->getDescription() + ", Whip";
}

double Whip::cost()
{
	return 0.10 + m_beverage->cost();
}
