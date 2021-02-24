#pragma once
#include <iostream>
using namespace std;

class MenuCompoennt
{
public:
	virtual void add(MenuCompoennt* menuComponent) {
		cout << "抛出add menuComponent异常" << endl;
	}

	virtual void remove(MenuCompoennt* menuComponent) {
		cout << "抛出remove menuComponent异常" << endl;
	}
	
	virtual MenuCompoennt* getChild(int i) {
		cout << "抛出getChild异常" << endl;
		return nullptr;
	}

	virtual string getName() {
		return "";
	}

	virtual string getDescription() {
		return "";
	}

	virtual double getPrice() {
		return 0;
	}

	virtual bool isVegetarian() {
		return false;
	}

	virtual virtual void print() {
		cout << "hello" << endl;
	}
};
