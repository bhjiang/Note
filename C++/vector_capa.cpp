#include<vector>
#include<iostream>
int main()
{
    std::vector<int> v;
    // std::cout<<v[0]<<std::endl;
    for(int i=0;i<8;++i)
    {
        v.push_back(i);
        std::cout<<v.size()<<" "<<v.capacity()<<std::endl;
    }
}