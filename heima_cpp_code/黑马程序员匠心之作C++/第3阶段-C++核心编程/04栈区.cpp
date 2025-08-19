//
// Created by 16659 on 25-8-18.
//
#include <iostream>
using namespace std;

int * func()
{
    // 利用new在堆区创建一个整型变量
    int * p = new int(10); // new返回的是该变量的地址
    return p; // 返回该变量的地址
}

int main ()
{
    // 在堆区创建一个整型变量，并返回其地址
    int *p = func();

    cout << "p = " << p << endl; // 输出指针p的地址
    cout << "*p = " << *p << endl; // 输出指针p所指向的值

    delete p; // 释放堆区内存
    cout << "p = " << p << endl;   // 输出指针p的地址，此时p仍然指向之前的地址
    cout << "*p = " << *p << endl; // 输出指针p所指向的值，此时p指向的内存已经被释放，访问未定义



    return 0;
}