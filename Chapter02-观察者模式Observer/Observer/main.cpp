#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "Observer.h"
#include "Subject.h"



int main()
{
	WeatherData *weatherData = new WeatherData();
	CurrentConditionDisplay *curDisplay = new CurrentConditionDisplay(weatherData);

	weatherData->setMeasurements(80, 65, 30.4);
	weatherData->setMeasurements(82, 70, 31.4);
	weatherData->setMeasurements(90, 60, 32.4);

	return 0;
}