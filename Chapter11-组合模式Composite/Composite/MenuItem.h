#pragma once
#include <string>
#include <iostream>
#include "MenuComponent.h"

using namespace std;

class MenuItem : public MenuCompoennt
{
public:
	MenuItem(string name, string desctiption, bool vegetarian, double price)
	{
		this->name = name;
		this->description = description;
		this->vegetarian = vegetarian;
		this->price = price;
	}

	string getName() override
	{
		return this->name;
	}

	string getDescription() override
	{
		return this->description;
	}

	bool isVegetarian() override
	{
		return this->vegetarian;
	}

	double getPrice() override
	{
		return this->price;
	}

	void print() override
	{
		cout << " " << getName();
		if (isVegetarian())
			cout << "(v)";
		cout << ", " << getPrice();
		cout << "  ---" << getDescription();
	}

private:
	string name;
	string description;
	bool vegetarian;
	double price;
};