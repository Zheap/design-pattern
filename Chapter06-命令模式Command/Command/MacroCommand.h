/*
	������  ����һ�����ͨ��������һ����ִ�ж�������
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

