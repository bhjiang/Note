#include<iostream>
struct A{
    char a;
    char b;
    int c;
};

struct  B{
    char a;
    int b;
    char c;
};

struct C{
    int c;
    int a[];
    // int* a;
};
int main(){
 
    // std::cout<<sizeof(A)<<std::endl;
    // std::cout<<sizeof(B)<<std::endl;
    std::cout<<sizeof(C)<<std::endl;
    std::cout<<sizeof(int*)<<std::endl;
    return 0;
}