#include "SingleInstance.h"

//初始化静态成员变量
SingleInstance* SingleInstance::m_singleInstance = nullptr;
std::mutex SingleInstance::m_Mutex;

SingleInstance*& SingleInstance::getInstance()
{
    // 这里使用两个if判断语句的技术叫做双检锁，好处是只有判断指针为空的时候才加锁
    // 是为了避免每次调用getInstance()的时候都加锁，加锁的开销比较大
    if (m_singleInstance == nullptr)
    {
        std::unique_lock<std::mutex> lock(m_Mutex); //加锁
        if (m_singleInstance == nullptr)
        {
            m_singleInstance = new SingleInstance;
        }
    }
    return m_singleInstance;
}

void SingleInstance::deleteInstance()
{
    std::unique_lock<std::mutex> lock(m_Mutex); //加锁
    if (m_singleInstance)
    {
        delete m_singleInstance;
        m_singleInstance = nullptr;
    }
}
