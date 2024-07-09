#include<iostream>
#include <string.h>
// #include <string.h>
int main()
{
    char str[] = "hello";
    std::cout<<sizeof(str)<<std::endl; 
    std::cout<<strlen(str)<<std::endl;
    return 0;
}