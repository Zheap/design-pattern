#pragma once
#include <iostream>
using namespace std;

class MenuCompoennt
{
public:
	virtual void add(MenuCompoennt* menuComponent) {
		cout << "�׳�add menuComponent�쳣" << endl;
	}

	virtual void remove(MenuCompoennt* menuComponent) {
		cout << "�׳�remove menuComponent�쳣" << endl;
	}
	
	virtual MenuCompoennt* getChild(int i) {
		cout << "�׳�getChild�쳣" << endl;
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
