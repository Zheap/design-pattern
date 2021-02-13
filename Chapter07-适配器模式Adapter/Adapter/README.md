# 适配器模式Adapter

## 定义

将一个类的接口，转换成客户期望的另一个接口。适配器让原本接口不兼容的类可以合作无间

## 适配器模式实现的关键点（对象适配器）

```
class TurkeyAdapter : public Duck          // 适配器模式关键点一：适配器类要继承想要转换成的类的接口，通俗的讲，就是想要适配成哪个类，就要继承哪个类
{
public:
	TurkeyAdapter(TurKey* turkey) {		   // 适配器模式关键点三：实现父类的所有虚函数
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
	TurKey* m_turkey;                      // 适配器模式关键点二：适配器类中要包含所要适配的类的对象，即为哪个类做的适配，就要包含哪个类的对象
										   // 这里其实是通过对象的组合来实现适配被适配者的
};
```

## 客户使用适配器的流程（对象适配器）

1. client通过目标接口（比如quack(), fly()），调用适配器的方法对适配器发出请求
2. 适配器使用被适配者（这里是TurKey）接口把请求转换成被适配者的一个或多个调用接口
3. 客户收到调用的结果，但是并未察觉这一切是适配器在起转换作用

![](.\image\对象适配器.jpg)

## 对象适配器的优点

由于对象适配器使用了组合，所以该适配器不仅适用于该被适配者(turkey)，还适配其任何子类



## 类的适配器

类的适配器只能在使用多重继承的时候实现，分别继承要适配的类和被适配的类；而对象适配器是利用组合的方式将请求传送给被适配者

```
#pragma once
#include "Duck.h"
#include "TurKey.h"

class TurkeyClassAdapter : public Duck, public TurKey
{
public:
	void quack() override {
		gobble();
	}

	void fly() override {
		TurKey::fly();
	}
};
```

![](E:\Code\design-pattern\Chapter07-适配器模式Adapter\Adapter\image\类的适配器.jpg)

