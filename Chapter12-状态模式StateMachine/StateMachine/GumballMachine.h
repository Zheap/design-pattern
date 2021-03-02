#pragma once
//�ǹ�����

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

	// ���ǹ�����״̬ί�и�״̬��ִ��
	void insertQuarter();

	void ejectQuarter();

	void turnCrank();

	// �ǹ�����Ӧ��ʵ�ַַ��ǹ��Ľӿڣ���Ϊ��ֻ��һ���ڲ��Ķ������û�������ֱ��Ҫ����������ǹ�
	// void dispense();   

	void setState(State* state);

	// �����ṩһ�������������ͷų��ǹ�����count������1
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