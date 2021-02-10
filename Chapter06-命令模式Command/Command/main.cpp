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
	����˵������ģʽ������"��������Ķ���"��"���ܺ�ִ����Щ����Ķ���"����
	���ǵ����ߺ�ִ����(������)��ͨ���м���������������
	�������setCommand���������У�Ȼ�������ͨ������������������������exec()����
	���������ڴ�����������ʱ����Լ�ע���ȥ��Ȼ��ִ����������exec()��������ʵ����ִ�н����ߵĶ�Ӧ����
*/


// ����main������������ģʽ�Ŀͻ�
int main()
{

/*Part1
	SimpleRemoteControl* remote = new SimpleRemoteControl();            // ң�����䵱�����ߣ�֮��ᴫ��һ��������󣬿���������������
	
	Light* light = new Light();                                         // ��ƶ��󣬴˶���Ҳ��������Ľ�����
	LightOnCommand* lightOnCommand = new LightOnCommand(light);         // ����������������ݵ��ǵ�ƶ���

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