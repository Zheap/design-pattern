#pragma once
#include "Duck.h"
#include "TurKey.h"


class TurkeyAdapter : public Duck                         // 适配器模式关键点一：适配器类要继承想要转换成的类的接口，通俗的讲，就是想要适配成哪个类，就要继承哪个类
{
public:

	TurkeyAdapter(TurKey* turkey) {						  // 适配器模式关键点三：实现父类的所有虚函数
		m_turkey = turkey;
	}

	void quack() override {
		m_turkey->gobble();
	}

	void fly() override {
		for (int i = 0; i < 5; i++)
		{
			m_turkey->fly();
		}
	}

private:
	TurKey* m_turkey;                                     // 适配器模式关键点二：适配器类中要包含所要适配的类的对象，即为哪个类做的适配，就要包含哪个类的对象

};