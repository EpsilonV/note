#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include<thread>
#include<mutex>

class Singleton{
private:
    Singleton(){
    }
public:
    static std::mutex g_mutex;
    static Singleton* getInstance();
}

Singleton* Singleton::getInstance(){
    std::lock_guard<std::mutex> lock(g_mutex);

}

#endif
