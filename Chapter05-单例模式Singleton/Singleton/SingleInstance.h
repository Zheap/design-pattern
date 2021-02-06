#pragma once
#include <mutex>
//����������ʽ���� - �̰߳�ȫ

class SingleInstance
{
public:
	// ��ȡ��ʵ������
	static SingleInstance*& getInstance();

	// �ͷŵ�ʵ���������˳�ʱ����
	static void deleteInstance();


private:
	//�����캯����������������Ϊ˽�еģ���ֹ�ⲿ���������
	SingleInstance();
	~SingleInstance();

	// ���������캯���͸�ֵ���캯������Ϊ˽�У���ֹ�ⲿ�����͸�ֵ
	SingleInstance(const SingleInstance& single);
	const SingleInstance& operator=(const SingleInstance& single);

private:
	//Ψһ��ʵ������ָ��
	static SingleInstance* m_singleInstance;
	static std::mutex m_Mutex;

};

