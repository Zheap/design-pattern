#pragma once
#include <iostream>

class CaffeineBeverage
{
public:
	/*
		C++�������麯���������final�ؼ��֣��������麯�����ܱ�������д
		prepareRecipe()����ģ�巽������Ϊ��
		1. prepareRecipe��һ������
		2. prepareRecipe����һ���㷨��ģ�壬����������У��㷨�������������������ϵ�
		3. �����ģ����(prepareRecipe)�У��㷨��ÿһ�����趼��һ����������ĳЩ�������ɸ��ദ����ĳЩ�����������ദ�������ദ��ķ����������ڸ���������Ϊ�麯��

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
