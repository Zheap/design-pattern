#pragma once
#include "Iterator.h"
#include "MenuItem.h"

class DinerMenuIterator : public Iterator
{
public:
	DinerMenuIterator(MenuItem* items[6]) {
		for (int i = 0; i < 6; i++)
		{
			this->items[i] = items[i];
		}
	}

	MenuItem* next() override
	{
		MenuItem* menuItem = items[position];
		position = position + 1;
		return menuItem;
	}

	bool hasNext() override
	{
		if (position >= 6 || items[position] == nullptr) 
		{
			return false;
		}
		else
		{
			return true;
		}
	}

private:
	MenuItem* items[6];
	int position = 0;

};