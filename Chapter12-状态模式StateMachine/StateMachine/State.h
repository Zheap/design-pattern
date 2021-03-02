#pragma once
#include <iostream>
#include <random>

using namespace std;

// 定义状态接口，这些状态直接映射到糖果机上可能发生的动作
class State
{
public:
	virtual void insertQuarter() {}
	virtual void ejectQuarter() {}
	virtual void turnCrank() {}
	virtual void dispense() {}
};

class GumballMachine;
class SoldState : public State
{
public:
	SoldState(GumballMachine* gumballMachine) {
		m_gumballMachine = gumballMachine;
	}

	void insertQuarter() override
	{
		cout << "请稍等，正在发放糖果中..." << endl;
	}

	void ejectQuarter() override
	{
		cout << "抱歉，您已转动滑杆" << endl;
	}

	void turnCrank() override
	{
		cout << "抱歉，您已转动滑杆" << endl;
	}

	void dispense() override
	{
		m_gumballMachine->releaseBall();
		if (m_gumballMachine->getCount() > 0) {
			m_gumballMachine->setState(m_gumballMachine->getNoQuartertate());
		}
		else {
			m_gumballMachine->setState(m_gumballMachine->getSoldOutState());
		}
	}

private:
	GumballMachine* m_gumballMachine;
};


class SoldOutState : public State
{
public:
	SoldOutState(GumballMachine* gumballMachine) {
		this->gumballMachine = gumballMachine;
	}

	void insertQuarter() override
	{
		cout << "抱歉，已售罄" << endl;
	}
	//无效的动作
	void ejectQuarter() override
	{
		cout << "抱歉，无法退还，因为您尚未支付" << endl;
	}

	void turnCrank() override
	{
		cout << "抱歉，已售罄" << endl;
	}

	void dispense() override
	{
		cout << "没有糖果可供售卖" << endl;
	}


private:
	GumballMachine* gumballMachine;
};


class NoQuarterState : public State
{
public:
	NoQuarterState(GumballMachine* gumballMachine) {
		this->gumballMachine = gumballMachine;
	}

	void insertQuarter() override
	{
		cout << "投币成功" << endl;
		gumballMachine->setState(gumballMachine->getHasQuarterState());
	}

	void ejectQuarter() override
	{
		cout << "抱歉，尚未投币" << endl;
	}

	void turnCrank() override
	{
		cout << "抱歉，请先投币" << endl;
	}

	void dispense() override
	{
		cout << "尚未投币" << endl;
	}


private:
	GumballMachine* gumballMachine;
};


class HasQuarterState : public State
{
public:
	HasQuarterState(GumballMachine* gumballMachine) {
		this->gumballMachine = gumballMachine;
	}

	void insertQuarter() override
	{
		cout << "当前已投币" << endl;
	}

	void ejectQuarter() override
	{
		cout << "已退币" << endl;
		gumballMachine->setState(gumballMachine->getNoQuartertate());
	}

	void turnCrank() override
	{
		cout << "开始转动" << endl;
		int winner = rand() % 10;
		if ((winner == 1) && (gumballMachine->getCount() > 1)) {
			gumballMachine->setState(gumballMachine->getWinnerState());
		}
		else {
			gumballMachine->setState(gumballMachine->getSoldState());
		}
	}

	// 不恰当的动作
	void dispense() override
	{
		cout << "要先转动滑杆" << endl;
	}


private:
	GumballMachine* gumballMachine;
};


class WinnerState : public State
{
public:
	WinnerState(GumballMachine* gumballMachine) {
		this->gumballMachine = gumballMachine;
	}

	void insertQuarter() override
	{
		cout << "请稍等，正在发放糖果中..." << endl;
	}

	void ejectQuarter() override
	{
		cout << "抱歉，您已转动滑杆" << endl;
	}

	void turnCrank() override
	{
		cout << "抱歉，您已转动滑杆" << endl;
	}

	void dispense() override
	{
		cout << "中奖啦" << endl;
		gumballMachine->releaseBall();
		if (gumballMachine->getCount() == 0) {
			gumballMachine->setState(gumballMachine->getSoldOutState());
		}
		else {
			gumballMachine->releaseBall();
			if (gumballMachine->getCount() > 0) {
				gumballMachine->setState(gumballMachine->getNoQuartertate());
			}
			else {
				gumballMachine->setState(gumballMachine->getSoldOutState());
			}
			
		}
	}

private:
	GumballMachine* gumballMachine;
};