#pragma once
#include <iostream>

class CaffeineBeverage
{
public:
	/*
		C++允许在虚函数后面加上final关键字，表明该虚函数不能被子类重写
		prepareRecipe()就是模板方法，因为：
		1. prepareRecipe是一个方法
		2. prepareRecipe用作一个算法的模板，在这个例子中，算法是用来制作咖啡因饮料的
		3. 在这个模板中(prepareRecipe)中，算法的每一个步骤都被一个方法代表，某些方法是由父类处理，而某些方法是由子类处理，由子类处理的方法，必须在父类中声明为虚函数

	 */
	virtual void prepareRecipe() final {
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

	virtual void brew() = 0;
	virtual void addCondiments() = 0;

	void boilWater() {
		std::cout << "Boiling water" << std::endl;
	}

	void pourInCup() {
		std::cout << "Pouring into cup" << std::endl;
	}


};
