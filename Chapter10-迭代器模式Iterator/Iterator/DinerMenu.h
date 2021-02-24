#pragma once
#include "MenuItem.h"
#include "Iterator.h"
#include "DinerMenuIterator.h"

class DinerMenu
{
public:
	DinerMenu(){
		addItem("hotdog0", "hotdog is good", false, 3.99);
		addItem("hotdog1", "hotdog is good", false, 3.01);
		addItem("hotdog2", "hotdog is good", false, 4.32);
		addItem("hotdog3", "hotdog is good", false, 5.11);

	}

	void addItem(string name, string description, bool vegetarian, double price) {
		MenuItem* item = new MenuItem(name, description, vegetarian, price);
		if (numberOfItems >= 6) {
			cout << "Menu is full" << endl;
		}
		else {
			menuItems[numberOfItems] = item;
			numberOfItems += 1;
		}
	}
	
	Iterator* creatorIterator()
	{
		return new DinerMenuIterator(menuItems);
	}
private:
	MenuItem* menuItems[6];
	int numberOfItems = 0;
};