#include<iostream>

// 回调函数：回调函数是把指向函数的指针作为参数传给另一个函数，可以在适当的时机调用该函数。

typedef void (*callback)(int);

void mycallback(int n)
{
    std::cout<<n<<std::endl;
}

void fun(int n, callback cb)
{
    if(n>3)
    {
        cb(n);
    }
}

int main()
{
    int n;
    std::cin>>n;
    fun(n,mycallback);
    return 0;
}