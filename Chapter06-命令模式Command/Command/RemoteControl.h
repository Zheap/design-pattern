#pragma once
#include <vector>
#include "Command.h"

class RemoteControl
{
public:

	RemoteControl();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);

protected:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
};

