#include <iostream>
using namespace std;
// ����ģʽ��ֻ��һ��ʵ�����࣬���ṩһ��ȫ�ַ��ʵ�
class singleton{
    private:
        singleton(){}; // ���캯��˽�л�
    public:
        static singleton& getInstance(){ // ��ȡΨһʵ��
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