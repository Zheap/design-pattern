#pragma once

#include "Command.h"
#include <vector>
class RemoteControlWithUndo
{
public:

	RemoteControlWithUndo();
	void setCommand(int slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	void undoButtomWasPushed();

protected:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
	Command* m_undoCommand;
};

