#pragma once
#include <iostream>
#include <string>
#include "CaffeineBeverageWithHook.h"

class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:
	void brew() override {
		std::cout << "Dripping Coffee through filter" << std::endl;
	}

	void addCondiments() override {
		std::cout << "Adding Sugar and Milk" << std::endl;
	}

	bool customerWantsCondiments() override
	{
		std::string answer = getUserInput();
		if (answer == "y") {
			return true;
		}
		else {
			return false;
		}

	}

private:
	std::string getUserInput()
	{
		std::string input;
		std::cout << "是否需要在咖啡中添加糖和牛奶：(y/n)" << std::endl;
		std::cin >> input;
		return input;
	}
};