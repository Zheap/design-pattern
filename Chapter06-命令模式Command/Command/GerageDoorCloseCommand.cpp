#include "GerageDoorCloseCommand.h"

void GerageDoorCloseCommand::execute()
{
	m_door->down();
}

void GerageDoorCloseCommand::undo()
{
	m_door->up();
}
