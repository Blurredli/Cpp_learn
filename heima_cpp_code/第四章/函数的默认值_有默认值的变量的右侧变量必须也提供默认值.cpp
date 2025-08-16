//
// Created by 16659 on 25-8-16.
//
// 注意: 函数的默认值_有默认值的变量的右侧变量必须也提供默认值

#include <iostream>
using namespace std;

void add (int x, int y=10, int z=20) // y和z有默认值
{
    cout << "x + y + z = " << x + y + z << endl;
}

int main ()
{
    add (10, 20);
    add (30);

    return 0;
}