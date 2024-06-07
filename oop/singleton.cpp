#include <iostream>
using namespace std;
// 单例模式是只有一个实例的类，并提供一个全局访问点
class singleton{
    private:
        singleton(){}; // 构造函数私有化
    public:
        static singleton& getInstance(){ // 获取唯一实例
            static singleton instance;
            return instance;
        }
        void print(){
            cout << this <<  endl;
        }
};


int main(){
    singleton instance=singleton::getInstance();
    singleton instance1=singleton::getInstance();
    instance.print();
    instance1.print();
    return 0;
}