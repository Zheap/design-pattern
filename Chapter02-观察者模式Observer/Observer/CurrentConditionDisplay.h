#pragma once

#include "Observer.h"
#include "DisplayElement.h"

class Subject;

class CurrentConditionDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionDisplay(Subject* weatherData);
	void update(float temperature, float humidity, float pressure) override;
	void display() override;



private:
	float m_temperature;
	float m_humidity;
	Subject* m_weatherData;
};

