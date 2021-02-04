#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "RawMaterial.h"


using namespace std;


class Pizza
{
public:
	
	virtual void prepare() = 0;
	
	void bake();
	void cut();
	void box();
	void setName(string name);
	string getName();
protected:
	string name;
	Dough* dough;
	Sauce* sauce;
	vector<Veggies*> veggies;
	Cheese* cheese;
	Pepperoni* pepperoni;
	Clams* clam;
};

