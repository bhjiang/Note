#include<iostream>
#include<memory>
class A{
public:
    A(int value):value(value){std::cout<<"创建A"<<std::endl;};
    int getvalue(){return value;};
    ~A(){std::cout<<"销毁A"<<std::endl;};
private:
    int value;
};

int main()
{
    // int *p ;//野指针：未初始化指针，编译过不了
    // std::cout << *p << std::endl;

    // int a[5] = {1, 2, 3, 4, 5};
    // int* p1 = a;
    // std::cout << *(p1+7) << std::endl;//野指针：越界，能过编译

    // int* p2 = new int(10);
    // int* p3=p2;
    // delete p2;
    // std::cout << *p2 << std::endl; //野指针：释放后的指针,能过编译
    // p2 = nullptr;
    // std::cout << *p3 << std::endl;//悬空指针：释放后的指针,能过编译

    // std::shared_ptr<int> p4(new int(10));
    // std::cout << *p4 << std::endl;
    std::shared_ptr<A> p5(new A(10));
    std::cout<<p5->getvalue()<<std::endl;
    std::cout<<p5->getvalue()<<std::endl;
    A* p6 = new A(1);
    std::cout<<p6->getvalue()<<std::endl;
    return 0;
}