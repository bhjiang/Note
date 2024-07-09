#include<stdio.h>
int main()
{
    int a=1;
    char* p=(char*)&a;
    printf("%c\n",*p);
    return 0;
}