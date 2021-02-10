#include "RemoteControl.h"

RemoteControl::RemoteControl()
{
	Command* noCommand = new Command;
	for (int i = 0; i < 7; i++)
	{
		onCommands.push_back(noCommand);
		offCommands.push_back(noCommand);
	}
}

void RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	if (slot < 0 || slot >= onCommands.size() || slot >= offCommands.size())
		return;
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot)
{
	offCommands[slot]->execute();
}
