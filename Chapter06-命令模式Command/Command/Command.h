#pragma once

// Command我理解就是包含了你想要做的事情，类比于餐厅里的菜单
class Command {
public:
	virtual void execute();
	virtual void undo();
};