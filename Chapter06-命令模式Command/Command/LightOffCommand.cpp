#include "LightOffCommand.h"

void LightOffCommand::execute()
{
	m_light->off();
}

void LightOffCommand::undo()
{
	m_light->on();
}
