#pragma once
#include "Command.h"
#include "GerageDoor.h"


class GerageDoorOpenCommand : public Command
{
public:
	GerageDoorOpenCommand(GerageDoor* door);
	void execute() override;

protected:
	GerageDoor* m_door;
};

