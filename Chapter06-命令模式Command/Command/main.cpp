#include <iostream>
#include "Command.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"
#include "GerageDoor.h"
#include "GerageDoorOpenCommand.h"

/*
	简单来说，命令模式，允许将"发出请求的对象"和"接受和执行这些请求的对象"解耦
	就是调用者和执行者(接收者)是通过中间命令对象来解耦的
	命令对象被setCommand到调用者中，然后调用者通过触发函数来调用命令对象的exec()函数
	而接收者在创建命令对象的时候把自己注册进去，然后执行命令对象的exec()函数，其实就是执行接收者的对应命令
*/


// 这里main函数就是命令模式的客户
int main()
{
	SimpleRemoteControl* remote = new SimpleRemoteControl();            // 遥控器充当调用者，之后会传入一个命令对象，可以用来发出请求
	
	Light* light = new Light();                                         // 电灯对象，此对象也就是请求的接收者
	LightOnCommand* lightOnCommand = new LightOnCommand(light);         // 命令对象，命令对象操纵的是电灯对象

	GerageDoor* gerageDoor = new GerageDoor();
	GerageDoorOpenCommand* doorOpenCommand = new GerageDoorOpenCommand(gerageDoor);

	remote->setCommand(lightOnCommand);
	remote->buttonPressed();

	remote->setCommand(doorOpenCommand);
	remote->buttonPressed();
	return 0;
}