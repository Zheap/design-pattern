#pragma once

// Command�������ǰ���������Ҫ�������飬����ڲ�����Ĳ˵�
class Command {
public:
	virtual void execute();
	virtual void undo();
};