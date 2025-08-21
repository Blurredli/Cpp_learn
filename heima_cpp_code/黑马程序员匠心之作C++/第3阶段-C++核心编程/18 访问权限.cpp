//
// Created by 16659 on 25-8-19.
//
#include <iostream>
using namespace std;

//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问

class Person
{
public:
    string name = "张三"; //公共权限

private:
    string car = "奔驰"; //私有权限

protected:
    int passward = 123456; //保护权限

public:
    void func()
    {
        cout << name << " " << car << " " << passward << endl;
    }

};


int main ()
{
    Person p;

    p.func();

    p.name = "李四";
    // p.car = "宝马"; //错误，car是私有权限
    // p.passward = 654321; //错误，passward是保护权限
    p.func(); //输出李四 奔驰 123456

    return 0;
}