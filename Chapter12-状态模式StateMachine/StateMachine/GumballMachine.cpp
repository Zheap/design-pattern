#include "GumballMachine.h"
#include "State.h"


GumballMachine::GumballMachine(int numberOfGumballs) {
	soldState = new SoldState(this);
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	winnerState = new WinnerState(this);
	count = numberOfGumballs;
	if (numberOfGumballs > 0) {
		state = noQuarterState;
	}
}

// ���ǹ�����״̬ί�и�״̬��ִ��
void GumballMachine::insertQuarter() {
	state->insertQuarter();
}

void GumballMachine::ejectQuarter() {
	state->ejectQuarter();
}

void GumballMachine::turnCrank() {
	state->turnCrank();
	state->dispense();
}

// �ǹ�����Ӧ��ʵ�ַַ��ǹ��Ľӿڣ���Ϊ��ֻ��һ���ڲ��Ķ������û�������ֱ��Ҫ����������ǹ�
// void dispense();   

void GumballMachine::setState(State* state) {
	this->state = state;
}

// �����ṩһ�������������ͷų��ǹ�����count������1
void GumballMachine::releaseBall() {
	std::cout << "���ڷ���һ���ǹ�" << std::endl;
	if (count != 0) {
		count -= 1;
	}
}

State* GumballMachine::getSoldState() {
	return soldState;
}

State* GumballMachine::getSoldOutState() {
	return soldOutState;
}

State* GumballMachine::getNoQuartertate() {
	return noQuarterState;
}

State* GumballMachine::getHasQuarterState() {
	return hasQuarterState;
}

State* GumballMachine::getWinnerState() {
	return winnerState;
}

int GumballMachine::getCount() {
	return count;
}