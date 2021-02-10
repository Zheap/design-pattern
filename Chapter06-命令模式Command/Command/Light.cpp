#include "Light.h"

#include <iostream>

using namespace std;

void Light::on()
{
	cout << m_name << " ¿ªµÆ" << endl;
}

void Light::off()
{
	cout << m_name << " ¹ØµÆ" << endl;
}
