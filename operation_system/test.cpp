#include <iostream>
using namespace std;
int main()
{
    int CS=0xFFFF,IP=0x0000;
    // int CS=0x07c0,IP=0x0000;
    cout<<hex<<(CS<<4+IP)<<endl; 

    // int BOOTSEG  = 0x07c0,INITSEG  = 0x9000;
    // cout<<dec<<BOOTSEG<<endl;
    // cout<<hex<<1984+4096<<endl; 
    return 0;
}