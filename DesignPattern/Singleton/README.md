单例模式
=============
单例模式确保只有一个实例存在

##懒汉单例模式(非线程安全)
单例实例在第一次使用时构建
```cpp
class Singleton {
private:
   Singleton(){}
   static Singleton *pInstance;
public:
   static Singleton* getInstance(){
     if(pInstance == NULL)
       pInstance = new Singleton;
    return pInstance;
   }
}
```


