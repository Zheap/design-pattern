#include <iostream>
#include "Command.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"
#include "GerageDoor.h"
#include "GerageDoorOpenCommand.h"

/*
	����˵������ģʽ������"��������Ķ���"��"���ܺ�ִ����Щ����Ķ���"����
	���ǵ����ߺ�ִ����(������)��ͨ���м���������������
	�������setCommand���������У�Ȼ�������ͨ������������������������exec()����
	���������ڴ�����������ʱ����Լ�ע���ȥ��Ȼ��ִ����������exec()��������ʵ����ִ�н����ߵĶ�Ӧ����
*/


// ����main������������ģʽ�Ŀͻ�
int main()
{
	SimpleRemoteControl* remote = new SimpleRemoteControl();            // ң�����䵱�����ߣ�֮��ᴫ��һ��������󣬿���������������
	
	Light* light = new Light();                                         // ��ƶ��󣬴˶���Ҳ��������Ľ�����
	LightOnCommand* lightOnCommand = new LightOnCommand(light);         // ����������������ݵ��ǵ�ƶ���

	GerageDoor* gerageDoor = new GerageDoor();
	GerageDoorOpenCommand* doorOpenCommand = new GerageDoorOpenCommand(gerageDoor);

	remote->setCommand(lightOnCommand);
	remote->buttonPressed();

	remote->setCommand(doorOpenCommand);
	remote->buttonPressed();
	return 0;
}