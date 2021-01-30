#include "Observer.h"
#include "WeatherData.h"

void WeatherData::registerObserver(Observer* o)
{
	if (o != nullptr) {
		m_observers.push_back(o);
	}
}

void WeatherData::removeObserver(Observer* o)
{
	if (o != nullptr)
	{
		for (auto it = m_observers.begin(); it != m_observers.end(); it++)
		{
			if (*it == o)
			{
				m_observers.erase(it);
				return;
			}
		}
	}
}

void WeatherData::notifyObservers()
{
	for (int i = 0; i < m_observers.size(); i++)
	{
		m_observers[i]->update(m_temperature, m_humidity, m_pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidirty, float pressure)
{
	m_temperature = temperature;
	m_humidity = humidirty;
	m_pressure = pressure;
	measurementsChanged();
}
