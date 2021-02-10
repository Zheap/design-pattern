#include "Command.h"
#include <iostream>

void Command::execute()
{
	std::cout << "empty command" << std::endl;
}

void Command::undo()
{
	std::cout << "command undo" << std::endl;
}
