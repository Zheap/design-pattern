/*
	宏命令  包含一组命令，通过宏命令一次性执行多条命令
*/

#pragma once
#include "Command.h"
#include <vector>

class MacroCommand : public Command
{
public:
	MacroCommand(std::vector<Command*> macroCommand);
	void execute() override;

protected:
	std::vector<Command*> m_macroCommand;

};

