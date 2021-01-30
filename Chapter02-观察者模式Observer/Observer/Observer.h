#pragma once

/*
	观察者基类
	1. 每个子类必须要实现update函数，用来更新自己的状态
	2. update函数中传入的是温度、湿度、气压
*/
class Observer
{
public:
	virtual void update(float temp, float humidity, float pressure) = 0;
};

