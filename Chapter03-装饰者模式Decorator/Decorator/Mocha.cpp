#include "Mocha.h"


//这里将Bevarage对象传进来，其实是代表着饮料，Mocha作为装饰者，来修饰被装饰的饮料/另一种调料
Mocha::Mocha(Beverage* beverage)
{
	this->m_beverage = beverage;
}

std::string Mocha::getDescription()
{
	return m_beverage->getDescription() + ", Mocha";
}

//要计算带Mocha饮料的价钱，首先要把调用委托给被装饰对象，以计算价钱，然后再加上Mocha的价钱
//我理解这里就是递归调用了，书上的圆圈图看起来比较容易理解
double Mocha::cost()
{
	return 0.20 + m_beverage->cost();
}
