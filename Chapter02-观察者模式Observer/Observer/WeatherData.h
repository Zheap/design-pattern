#pragma once
#include "Subject.h"
#include <vector>
#include <list>
#include <memory>

class Observer;

class WeatherData : public Subject
{
public:
	void registerObserver(Observer* o) override;
	void removeObserver(Observer* o) override;
	void notifyObservers() override;

	void measurementsChanged();
	void setMeasurements(float temperature, float humidirty, float pressure);



private:
	std::vector<Observer*> m_observers;
	float m_temperature;
	float m_humidity;
	float m_pressure;
};

