#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    // stringstream ss;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s)
    {
        cout<<s<<endl;
    }

    return 0;
}