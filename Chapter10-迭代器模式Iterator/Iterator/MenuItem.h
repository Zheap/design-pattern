#pragma once
#include <string>
#include <iostream>

using namespace std;

class MenuItem
{
public:
	MenuItem(string name, string desctiption, bool vegetarian, double price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}

	string getName()
	{
		return this->name;
	}

	string getDescription()
	{
		return this->description;
	}

	bool getVegetarian()
	{
		return this->vegetarian;
	}

	double getPrice()
	{
		return this->price;
	}


private:
	string name;
	string description;
	bool vegetarian;
	double price;
};