#pragma once
#include "DinerMenu.h"
#include "Iterator.h"
#include "DinerMenuIterator.h"


class Waitress
{
public:
	Waitress(DinerMenu* d1, DinerMenu* d2) {
		this->dinerMenu1 = d1;
		this->dinerMenu2 = d2;
	}

	void printMenu()
	{
		Iterator* iterator1 = dinerMenu1->creatorIterator();
		Iterator* iterator2 = dinerMenu2->creatorIterator();
		cout << "Menu1----" << endl;
		printMenu(iterator1);
		cout << "Menu2----" << endl;
		printMenu(iterator2);
	}

	void printMenu(Iterator* iterator)
	{
		while (iterator->hasNext())
		{
			MenuItem* item = (MenuItem*)iterator->next();
			cout << item->getName() << endl;
			cout << item->getDescription() << endl;
			cout << item->getVegetarian() << endl;
			cout << item->getPrice() << endl;
		}
	}

private:
	DinerMenu* dinerMenu1;
	DinerMenu* dinerMenu2;
};