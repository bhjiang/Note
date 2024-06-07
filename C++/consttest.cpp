#include<iostream>
using namespace std;
int main()
{
    // const int a=10;
    int a=10;
    const int* p=&a;
    // int* const p=&a;
    int b=1;
    p=&b;
    *p=0;
    // int* p1=&b;
    // *p1=11;
    cout<<*p<<endl;
    return 0;
}