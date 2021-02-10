#include <iostream>
#include "Command.h"
#include "RemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "SimpleRemoteControl.h"
#include "GerageDoor.h"
#include "GerageDoorOpenCommand.h"
#include "GerageDoorCloseCommand.h"
#include "RemoteControlWithUndo.h"
#include "MacroCommand.h"
/*
	简单来说，命令模式，允许将"发出请求的对象"和"接受和执行这些请求的对象"解耦
	就是调用者和执行者(接收者)是通过中间命令对象来解耦的
	命令对象被setCommand到调用者中，然后调用者通过触发函数来调用命令对象的exec()函数
	而接收者在创建命令对象的时候把自己注册进去，然后执行命令对象的exec()函数，其实就是执行接收者的对应命令
*/


// 这里main函数就是命令模式的客户
int main()
{

/*Part1
	SimpleRemoteControl* remote = new SimpleRemoteControl();            // 遥控器充当调用者，之后会传入一个命令对象，可以用来发出请求
	
	Light* light = new Light();                                         // 电灯对象，此对象也就是请求的接收者
	LightOnCommand* lightOnCommand = new LightOnCommand(light);         // 命令对象，命令对象操纵的是电灯对象

	GerageDoor* gerageDoor = new GerageDoor();
	GerageDoorOpenCommand* doorOpenCommand = new GerageDoorOpenCommand(gerageDoor);

	remote->setCommand(lightOnCommand);
	remote->buttonPressed();

	remote->setCommand(doorOpenCommand);
	remote->buttonPressed();
*/

/*Part2
	RemoteControl* control = new RemoteControl();
	Light* livingRoomLight = new Light("Living Room");
	Light* kichenLight = new Light("Kichen Room");
	GerageDoor* door = new GerageDoor();

	LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
	LightOnCommand* kichenLightOn = new LightOnCommand(kichenLight);
	LightOffCommand* kichenLightOff = new LightOffCommand(kichenLight);
	GerageDoorOpenCommand* gerageDoorOpen = new GerageDoorOpenCommand(door);
	GerageDoorCloseCommand* gerageDoorClose = new GerageDoorCloseCommand(door);

	control->setCommand(0, livingRoomLightOn, livingRoomLightOff);
	control->setCommand(1, kichenLightOn, kichenLightOff);
	control->setCommand(2, gerageDoorOpen, gerageDoorClose);

	control->onButtonWasPushed(0);
	control->offButtonWasPushed(0);
	control->onButtonWasPushed(1);
	control->offButtonWasPushed(1);
	control->onButtonWasPushed(2);
	control->offButtonWasPushed(2);
*/


/*Part3
	RemoteControlWithUndo* control = new RemoteControlWithUndo();

	Light* livingRoomLight = new Light("Living Room");
	LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);

	control->setCommand(0, livingRoomLightOn, livingRoomLightOff);

	control->onButtonWasPushed(0);
	control->offButtonWasPushed(0);
	control->undoButtomWasPushed();
	control->offButtonWasPushed(0);
	control->onButtonWasPushed(0);
	control->undoButtomWasPushed();
*/

/*Part4
*/
	RemoteControlWithUndo* control = new RemoteControlWithUndo();
	Light* livingRoomLight = new Light("Living Room");
	Light* kichenLight = new Light("Kichen Room");
	GerageDoor* door = new GerageDoor();

	LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
	LightOnCommand* kichenLightOn = new LightOnCommand(kichenLight);
	LightOffCommand* kichenLightOff = new LightOffCommand(kichenLight);
	GerageDoorOpenCommand* gerageDoorOpen = new GerageDoorOpenCommand(door);
	GerageDoorCloseCommand* gerageDoorClose = new GerageDoorCloseCommand(door);

	std::vector<Command*> tmp1;
	std::vector<Command*> tmp2;
	tmp1.push_back(livingRoomLightOn);
	tmp2.push_back(livingRoomLightOff);
	tmp1.push_back(kichenLightOn);
	tmp2.push_back(kichenLightOff);
	tmp1.push_back(gerageDoorOpen);
	tmp2.push_back(gerageDoorClose);

	MacroCommand* macroOnCommand = new MacroCommand(tmp1);
	MacroCommand* macroOffComand = new MacroCommand(tmp2);

	control->setCommand(0, macroOnCommand, macroOffComand);

	control->onButtonWasPushed(0);
	control->offButtonWasPushed(0);



	return 0;
}