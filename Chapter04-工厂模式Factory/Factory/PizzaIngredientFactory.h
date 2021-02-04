#include "RawMaterial.h"
#include <vector>
using namespace std;

class PizzaIngredientFactory
{
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clams* createClams() = 0;
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough* createDough() {
		return new ThinCrustDough();
	}

	Sauce* createSauce() {
		return new MarinaraSauce();
	}

	Cheese* createCheese() {
		return new ReggianoCheese();
	}

	vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies;
		veggies.push_back(new Garlic());
		veggies.push_back(new Onion());
		veggies.push_back(new Mushroom());
		veggies.push_back(new RedPepper());
		return veggies;
	}

	Pepperoni* createPepperoni() {
		return new SlicedPeooeroni();
	}

	Clams* createClams() {
		return new FreshClams();
	}

};


class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough* createDough() {
		return new ThickCrustDough();
	}

	Sauce* createSauce() {
		return new PlumTomatoSauce();
	}

	Cheese* createCheese() {
		return new Mazzarella();
	}

	vector<Veggies*> createVeggies() {
		vector<Veggies*> veggies;
		veggies.push_back(new Garlic());
		veggies.push_back(new Onion());
		veggies.push_back(new Mushroom());
		veggies.push_back(new RedPepper());
		return veggies;
	}

	Pepperoni* createPepperoni() {
		return new SlicedPeooeroni();
	}

	Clams* createClams() {
		return new FrozenClams();
	}

};