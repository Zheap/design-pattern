#include "Menu.h"
#include "MenuComponent.h"
#include "MenuItem.h"

int main()
{
	MenuCompoennt* pancake = new Menu("Pancake Menu", "Breakfast");
	MenuCompoennt* diner = new Menu("Dinner Menu", "Dinner");
	MenuCompoennt* cafe = new Menu("Cafe Menu", "Cafe");
	MenuCompoennt* dessert = new Menu("Dessert Menu", "Dessert");
	MenuCompoennt* allMenus = new Menu("All Menus", "All menus combined");

	allMenus->add(pancake);
	allMenus->add(diner);
	allMenus->add(cafe);

	diner->add(new MenuItem("Pasta", "slice bread", true, 3.89));
	diner->add(dessert);

	dessert->add(new MenuItem("Apple Pie", "Pie", true, 1.59));

	allMenus->print();

	return 0;
}