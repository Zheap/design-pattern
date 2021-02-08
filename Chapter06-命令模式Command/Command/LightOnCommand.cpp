#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light* light)
{
	m_light = light;
}

void LightOnCommand::execute()
{
	m_light->on();
}
