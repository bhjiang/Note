#include<iostream>
class Person{
public:
    Person(){std::cout<<"创建Person"<<std::endl;};
    virtual void buyticket(){
        std::cout<<"成人全价买票"<<std::endl;
    };
    virtual ~Person(){std::cout<<"销毁Person"<<std::endl;};
};// 虚函数表 
class Student:public Person{   
public:
    Student(){std::cout<<"创建Student"<<std::endl;};
    // virtual void buyticket(){
    //     std::cout<<"学生半价买票"<<std::endl;
    // };
    virtual ~Student(){std::cout<<"销毁Student"<<std::endl;};
};// 
int main(){
    Person *p1=new Student();//vptr 
    Person *p2=new Person();
    p1->buyticket();
    p2->buyticket();
    delete p1;
    delete p2;
    return 0;
}