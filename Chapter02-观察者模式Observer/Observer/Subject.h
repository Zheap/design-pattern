#pragma once

/*
	主题基类
	包含状态改变
*/

class Observer;

class Subject
{
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
};

