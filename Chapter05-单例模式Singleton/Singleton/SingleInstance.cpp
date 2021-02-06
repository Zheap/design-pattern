#include "SingleInstance.h"

//��ʼ����̬��Ա����
SingleInstance* SingleInstance::m_singleInstance = nullptr;
std::mutex SingleInstance::m_Mutex;

SingleInstance*& SingleInstance::getInstance()
{
    // ����ʹ������if�ж����ļ�������˫�������ô���ֻ���ж�ָ��Ϊ�յ�ʱ��ż���
    // ��Ϊ�˱���ÿ�ε���getInstance()��ʱ�򶼼����������Ŀ����Ƚϴ�
    if (m_singleInstance == nullptr)
    {
        std::unique_lock<std::mutex> lock(m_Mutex); //����
        if (m_singleInstance == nullptr)
        {
            m_singleInstance = new SingleInstance;
        }
    }
    return m_singleInstance;
}

void SingleInstance::deleteInstance()
{
    std::unique_lock<std::mutex> lock(m_Mutex); //����
    if (m_singleInstance)
    {
        delete m_singleInstance;
        m_singleInstance = nullptr;
    }
}
