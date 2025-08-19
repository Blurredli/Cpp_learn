//
// Created by 16659 on 25-8-19.
//
//3.2 函数占位参数
//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置

#include <iostream>
using namespace std;

void func (int a, int )
{
    cout << "a = " << a << endl;
}

int main ()
{
    func (1, 2);

    return 0;
}