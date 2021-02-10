#include "RemoteControlWithUndo.h"

RemoteControlWithUndo::RemoteControlWithUndo()
{
	Command* noCommand = new Command();
	for (int i = 0; i < 7; ++i) {
		onCommands.push_back(noCommand);
		offCommands.push_back(noCommand);
	}
	m_undoCommand = noCommand;
}

void RemoteControlWithUndo::setCommand(int slot, Command* onCommand, Command* offCommand)
{
	if (slot < 0 || slot >= onCommands.size() || slot >= offCommands.size())
		return;
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControlWithUndo::onButtonWasPushed(int slot)
{
	onCommands[slot]->execute();
	m_undoCommand = onCommands[slot];
}

void RemoteControlWithUndo::offButtonWasPushed(int slot)
{
	offCommands[slot]->execute();
	m_undoCommand = offCommands[slot];
}

void RemoteControlWithUndo::undoButtomWasPushed()
{
	m_undoCommand->undo();
}
