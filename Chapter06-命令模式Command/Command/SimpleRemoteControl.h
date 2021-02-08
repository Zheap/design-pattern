#pragma once
#include "Command.h"

/*
	执行器invoker，相当于是餐厅里的服务员，拿走菜单takeover()，并且让厨房按照菜单做饭orderup()
	takeover() --- setCommand()
	orderup()  --- buttonPressed()
*/
class SimpleRemoteControl
{
public:
	void setCommand(Command* command);
	void buttonPressed();

protected:
	Command* m_command;

};

