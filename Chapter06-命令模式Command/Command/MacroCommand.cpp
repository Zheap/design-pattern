#include "MacroCommand.h"

MacroCommand::MacroCommand(std::vector<Command*> macroCommand)
{
	m_macroCommand = macroCommand;
}

void MacroCommand::execute()
{
	for (int i = 0; i < m_macroCommand.size(); i++)
	{
		m_macroCommand[i]->execute();
	}
}


