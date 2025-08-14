//
// Created by 16659 on 25-8-14.
//

#include <iostream>
using namespace std;

int main ()
{
    int *p = new int;

    *p = 10; // 动态分配内存并赋值
    cout << "new 申请的四字节空间, 存放的整数值是: " << *p << endl;

    delete p; // 释放动态分配的内存, 一定记得搭配使用,记得删除

    int *p_arr = new int[5]; // 动态分配一个数组
    // 指针也可以使用数组的方式访问
    // 注意: new分配的数组需要使用delete[]来释放
    p_arr[0] = 10;
    p_arr[1] = 20;
    p_arr[2] = 30;
    p_arr[3] = 40;
    p_arr[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout <<"数组第" << i + 1 << "个元素的值是: " << p_arr[i] << endl;
    }

    delete [] p_arr; // 释放动态分配的数组内存, 使用delete[]来释放数组

    return 0;
}