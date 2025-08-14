//
// Created by 16659 on 25-8-13.
//

//帮我写好cpp的程序框架
#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {1, 2, 3, 4, 5}; // 定义一个数组
    int size = sizeof(arr) / sizeof(arr[0]); // 计算数组大小
    // C++11以上的特性for的高级写法类似python的for循环, C语言无法实现
    for (int element : arr) // 使用范围for循环遍历数组
    {
        cout << "高级for循环取出内容: " << element << "\n"; // 输出每个元素
    }
    cout << endl; // 换行输出

    return 0;
}