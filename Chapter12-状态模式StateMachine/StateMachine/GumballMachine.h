#pragma once
//糖果机类

#include <iostream>
class State;
class SoldState;
class SoldOutState;
class NoQuarterState;
class HasQuarterState;
class WinnerState;

class GumballMachine
{
public:
	GumballMachine(int numberOfGumballs);

	// 将糖果机的状态委托给状态来执行
	void insertQuarter();

	void ejectQuarter();

	void turnCrank();

	// 糖果机不应该实现分发糖果的接口，因为这只是一个内部的动作，用户不可以直接要求机器发放糖果
	// void dispense();   

	void setState(State* state);

	// 机器提供一个辅助方法来释放出糖果，将count数量减1
	void releaseBall();

	State* getSoldState();
	State* getSoldOutState();
	State* getNoQuartertate();
	State* getHasQuarterState();
	State* getWinnerState();

	int getCount();


private:
	State* soldState;
	State* soldOutState;
	State* noQuarterState;
	State* hasQuarterState;
	State* winnerState;

	State* state = noQuarterState;
	int count = 0;
};