#include "Pizza.h"
void Pizza::bake()
{
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
    cout << "Cutting the pizza int diagonal slices" << endl;
}

void Pizza::box()
{
    cout << "Place pizze in official PizzaStore box" << endl;
}

void Pizza::setName(string name)
{
    this->name = name;
}

string Pizza::getName()
{
    return name;
}
