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

// 将糖果机的状态委托给状态来执行
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

// 糖果机不应该实现分发糖果的接口，因为这只是一个内部的动作，用户不可以直接要求机器发放糖果
// void dispense();   

void GumballMachine::setState(State* state) {
	this->state = state;
}

// 机器提供一个辅助方法来释放出糖果，将count数量减1
void GumballMachine::releaseBall() {
	std::cout << "正在发放一颗糖果" << std::endl;
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