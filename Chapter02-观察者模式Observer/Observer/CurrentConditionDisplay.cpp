#include "CurrentConditionDisplay.h"
#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

#include <iostream>


CurrentConditionDisplay::CurrentConditionDisplay(Subject* weatherData)
{
	m_weatherData = weatherData;
	m_weatherData->registerObserver(this); //����ʵ��ע��۲���
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure)
{
	m_temperature = temperature;
	m_humidity = humidity;
	display();
}

void CurrentConditionDisplay::display()
{
	std::cout << "Current conditions: " << m_temperature << "F degrees and " << m_humidity << "% humidity" << std::endl;
}
