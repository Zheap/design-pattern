#include "ChicagoPizzaStore.h"

Pizza* ChicagoPizzaStore::createPizza(string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

    if (type == "cheese") {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("Chicago Style Cheese Pizza");
    }
    else if (type == "clam") {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("Chicago Style Clam Pizza");
    }
    return pizza;
}
