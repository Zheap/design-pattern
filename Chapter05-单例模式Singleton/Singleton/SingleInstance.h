#pragma once
#include <mutex>
//加锁的懒汉式单例 - 线程安全

class SingleInstance
{
public:
	// 获取单实例对象
	static SingleInstance*& getInstance();

	// 释放单实例，进程退出时调用
	static void deleteInstance();


private:
	//将构造函数和析构函数定义为私有的，禁止外部构造和析构
	SingleInstance();
	~SingleInstance();

	// 将拷贝构造函数和赋值构造函数定义为私有，禁止外部拷贝和赋值
	SingleInstance(const SingleInstance& single);
	const SingleInstance& operator=(const SingleInstance& single);

private:
	//唯一单实例对象指针
	static SingleInstance* m_singleInstance;
	static std::mutex m_Mutex;

};

