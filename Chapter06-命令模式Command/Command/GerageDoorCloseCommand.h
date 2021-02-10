#pragma once
#include "Command.h"
#include "GerageDoor.h"


class GerageDoorCloseCommand : public Command
{
public:
	GerageDoorCloseCommand(GerageDoor* door) {
		m_door = door;
	}
	void execute() override;
	void undo() override;

protected:
	GerageDoor* m_door;
};

