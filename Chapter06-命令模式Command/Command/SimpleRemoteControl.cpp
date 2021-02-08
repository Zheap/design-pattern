#include "SimpleRemoteControl.h"

void SimpleRemoteControl::setCommand(Command* command)
{
	m_command = command;
}

void SimpleRemoteControl::buttonPressed()
{
	m_command->execute();
}

