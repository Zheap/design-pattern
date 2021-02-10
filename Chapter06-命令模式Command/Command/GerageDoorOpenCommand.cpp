#include "GerageDoorOpenCommand.h"

GerageDoorOpenCommand::GerageDoorOpenCommand(GerageDoor* door)
{
	m_door = door;
}

void GerageDoorOpenCommand::execute()
{
	m_door->up();
}

void GerageDoorOpenCommand::undo()
{
	m_door->down();
}
