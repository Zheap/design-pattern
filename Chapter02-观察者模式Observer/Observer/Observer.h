#pragma once

/*
	�۲��߻���
	1. ÿ���������Ҫʵ��update���������������Լ���״̬
	2. update�����д�������¶ȡ�ʪ�ȡ���ѹ
*/
class Observer
{
public:
	virtual void update(float temp, float humidity, float pressure) = 0;
};

