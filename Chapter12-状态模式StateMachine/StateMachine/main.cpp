#include "GumballMachine.h"
#include "State.h"

int main() 
{
	GumballMachine* machine = new GumballMachine(5);
	machine->insertQuarter();
	machine->turnCrank();

	machine->insertQuarter();
	machine->turnCrank();

	machine->insertQuarter();
	machine->turnCrank();

	return 0;
}