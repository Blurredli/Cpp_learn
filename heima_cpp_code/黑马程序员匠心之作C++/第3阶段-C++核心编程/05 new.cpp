//
// Created by 16659 on 25-8-18.
//
#include <iostream>
using namespace std;

int *func()
{   // 在堆区创建一个整型变量
    // new 返回的是该数据类型的指针(地址)
    int *p = new int(10); // 在堆区创建一个整型变量，并返回其地址
    return p; // 返回该变量的地址
}

void test01()
{
    int *p = func(); // 调用func函数，获取堆区变量的地址
    cout << "p = " << p << endl; // 输出指针p的地址
    cout << "*p = " << *p << endl; // 输出指针p所指向的值
    delete p; // 释放堆区内存
}

void test02()
{
    int * arr = new int[10]; // 在堆区创建一个整型数组

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100; // 给数组元素赋值
        cout << arr[i] << " ";
    }

    //　！！！！！！！！！！！！！！！！！！！！！！
    // 注意：释放堆区内存时，必须使用与new对应的delete[]来释放数组
    delete[] arr; // 释放堆区数组内存


}
int main ()
{
    test01();
    test02();

    return 0;
}