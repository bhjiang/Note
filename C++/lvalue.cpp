#include<iostream>
void f(int& a)
{
    std::cout<<&a<<std::endl;
}
int main()
{
    // int a=1;
    // std::cout<<&1<<std::endl;
    f(1);
    return 0;
}