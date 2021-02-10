#pragma once
#include "Command.h"
#include "Light.h"

/*
	ʵ��һ���򿪵�Ƶ�����
	1. ��������һ����������Ҫ�̳���Command
	2. ����������Ҫ�����Ķ����ǵ�ƣ������Ҫ������ڲ�����Light�Ķ������Ӧ�ÿ�������
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

