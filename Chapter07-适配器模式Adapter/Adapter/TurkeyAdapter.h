#pragma once
#include "Duck.h"
#include "TurKey.h"


class TurkeyAdapter : public Duck                         // ������ģʽ�ؼ���һ����������Ҫ�̳���Ҫת���ɵ���Ľӿڣ�ͨ�׵Ľ���������Ҫ������ĸ��࣬��Ҫ�̳��ĸ���
{
public:

	TurkeyAdapter(TurKey* turkey) {						  // ������ģʽ�ؼ�������ʵ�ָ���������麯��
		m_turkey = turkey;
	}

	void quack() override {
		m_turkey->gobble();
	}

	void fly() override {
		for (int i = 0; i < 5; i++)
		{
			m_turkey->fly();
		}
	}

private:
	TurKey* m_turkey;                                     // ������ģʽ�ؼ����������������Ҫ������Ҫ�������Ķ��󣬼�Ϊ�ĸ����������䣬��Ҫ�����ĸ���Ķ���

};