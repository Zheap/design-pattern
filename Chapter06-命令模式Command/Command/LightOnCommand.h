#pragma once
#include "Command.h"
#include "Light.h"

/*
	实现一个打开电灯的命令
	1. 首先这是一个命令，因此需要继承自Command
	2. 其次这个命令要操作的对象是电灯，因此需要在类的内部声明Light的对象，这个应该可以理解吧
*/
class LightOnCommand : public Command
{
public:
	LightOnCommand(Light* light);
	void execute() override;
	void undo() override;

protected:
	Light* m_light;
};

