#pragma once
#include "Command.h"

/*
	ִ����invoker���൱���ǲ�����ķ���Ա�����߲˵�takeover()�������ó������ղ˵�����orderup()
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

