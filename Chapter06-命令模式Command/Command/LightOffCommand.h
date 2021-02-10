#pragma once
#include "Light.h"
#include "Command.h"


class LightOffCommand : public Command
{
public:
	LightOffCommand(Light* light) {
		m_light = light;
	}

	void execute() override;
	void undo() override;

protected:
	Light* m_light;
};

