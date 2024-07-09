#include<iostream>
int f(int&& a)
{
    a+=2;
    return a;
}
// class A{
// public:
//     A(int a):a(a){};
//     int getValue(){return a;};
// private:
//     int a;
// };
int main()
{
    // A a(0);
    // A &p1=a;
    // A &p2=a;
    // std::cout<<p1.getValue()<<std::endl;
    // std::cout<<p2.getValue()<<std::endl;
    std::cout<<f(200)<<std::endl;
    return 0;
}