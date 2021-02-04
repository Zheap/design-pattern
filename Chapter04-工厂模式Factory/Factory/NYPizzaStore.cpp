#include "NYPizzaStore.h"

Pizza* NYPizzaStore::createPizza(string type)
{
    Pizza* pizza = nullptr;
    PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

    if (type == "cheese") {
        pizza = new CheesePizza(ingredientFactory);
        pizza->setName("New York Style Cheese Pizza");
    }
    else if (type == "clam") {
        pizza = new ClamPizza(ingredientFactory);
        pizza->setName("New York Style Clam Pizza");
    }
    return pizza;
}
