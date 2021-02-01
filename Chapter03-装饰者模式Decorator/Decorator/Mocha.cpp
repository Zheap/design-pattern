#include "Mocha.h"


//���ｫBevarage���󴫽�������ʵ�Ǵ��������ϣ�Mocha��Ϊװ���ߣ������α�װ�ε�����/��һ�ֵ���
Mocha::Mocha(Beverage* beverage)
{
	this->m_beverage = beverage;
}

std::string Mocha::getDescription()
{
	return m_beverage->getDescription() + ", Mocha";
}

//Ҫ�����Mocha���ϵļ�Ǯ������Ҫ�ѵ���ί�и���װ�ζ����Լ����Ǯ��Ȼ���ټ���Mocha�ļ�Ǯ
//�����������ǵݹ�����ˣ����ϵ�ԲȦͼ�������Ƚ��������
double Mocha::cost()
{
	return 0.20 + m_beverage->cost();
}
