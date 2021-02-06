#pragma once


//单例模式 - 经典单例模式(单线程 懒汉式 用到该实例时才创建)

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


// 单例模式 - 饿汉式 系统一运行就创建实例，本身线程安全
class Singleton1 {
public:
	static Singleton1* getInstance() {
		return uniqueSingleton;
	}

private:
	Singleton1() {}
	static Singleton1* uniqueSingleton;  //定义在cpp中
};