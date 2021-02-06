#pragma once


//����ģʽ - ���䵥��ģʽ(���߳� ����ʽ �õ���ʵ��ʱ�Ŵ���)

class Singleton {
public:
	static Singleton* getInstance() {
		if (uniqueSingleton == nullptr) {
			uniqueSingleton = new Singleton();
		}
		return uniqueSingleton;
	}
private:
	Singleton() {}
	static Singleton* uniqueSingleton;
};


// ����ģʽ - ����ʽ ϵͳһ���оʹ���ʵ���������̰߳�ȫ
class Singleton1 {
public:
	static Singleton1* getInstance() {
		return uniqueSingleton;
	}

private:
	Singleton1() {}
	static Singleton1* uniqueSingleton;  //������cpp��
};