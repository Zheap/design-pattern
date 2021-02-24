#pragma once
#include <vector>
#include "MenuComponent.h"

class Menu : public MenuCompoennt
{
public:
	Menu(string name, string description) {
		this->name = name;
		this->description = description;
	}

	void add(MenuCompoennt* menuComponent) override {
		menuComponents.push_back(menuComponent);
	}

	void remove(MenuCompoennt* menuComponent) override {
		for (auto it = menuComponents.begin(); it != menuComponents.end(); it++) {
			if ((*it) == menuComponent) {
				menuComponents.erase(it);
			}
		}
	}

	MenuCompoennt* getChild(int i) {
		if (i < 0 || i > menuComponents.size())
			return nullptr;
		return menuComponents[i];
	}

	string getName() override {
		return this->name;
	}

	string getDescription() override {
		return this->description;
	}

	void print() override
	{
		cout << getName() << ": " << getDescription() << endl;

		//¹Ø¼üµã
		for (auto it = menuComponents.begin(); it != menuComponents.end(); it++) {
			(*it)->print();
		}
	}

private:
	vector<MenuCompoennt*> menuComponents;
	string name;
	string description;

};