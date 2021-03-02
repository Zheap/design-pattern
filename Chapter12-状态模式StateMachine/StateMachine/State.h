#pragma once
#include <iostream>
#include <random>

using namespace std;

// ����״̬�ӿڣ���Щ״ֱ̬��ӳ�䵽�ǹ����Ͽ��ܷ����Ķ���
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
		cout << "���Եȣ����ڷ����ǹ���..." << endl;
	}

	void ejectQuarter() override
	{
		cout << "��Ǹ������ת������" << endl;
	}

	void turnCrank() override
	{
		cout << "��Ǹ������ת������" << endl;
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
		cout << "��Ǹ��������" << endl;
	}
	//��Ч�Ķ���
	void ejectQuarter() override
	{
		cout << "��Ǹ���޷��˻�����Ϊ����δ֧��" << endl;
	}

	void turnCrank() override
	{
		cout << "��Ǹ��������" << endl;
	}

	void dispense() override
	{
		cout << "û���ǹ��ɹ�����" << endl;
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
		cout << "Ͷ�ҳɹ�" << endl;
		gumballMachine->setState(gumballMachine->getHasQuarterState());
	}

	void ejectQuarter() override
	{
		cout << "��Ǹ����δͶ��" << endl;
	}

	void turnCrank() override
	{
		cout << "��Ǹ������Ͷ��" << endl;
	}

	void dispense() override
	{
		cout << "��δͶ��" << endl;
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
		cout << "��ǰ��Ͷ��" << endl;
	}

	void ejectQuarter() override
	{
		cout << "���˱�" << endl;
		gumballMachine->setState(gumballMachine->getNoQuartertate());
	}

	void turnCrank() override
	{
		cout << "��ʼת��" << endl;
		int winner = rand() % 10;
		if ((winner == 1) && (gumballMachine->getCount() > 1)) {
			gumballMachine->setState(gumballMachine->getWinnerState());
		}
		else {
			gumballMachine->setState(gumballMachine->getSoldState());
		}
	}

	// ��ǡ���Ķ���
	void dispense() override
	{
		cout << "Ҫ��ת������" << endl;
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
		cout << "���Եȣ����ڷ����ǹ���..." << endl;
	}

	void ejectQuarter() override
	{
		cout << "��Ǹ������ת������" << endl;
	}

	void turnCrank() override
	{
		cout << "��Ǹ������ת������" << endl;
	}

	void dispense() override
	{
		cout << "�н���" << endl;
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