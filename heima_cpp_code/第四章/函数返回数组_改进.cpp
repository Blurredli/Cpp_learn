//
// Created by 16659 on 25-8-16.
//
#include <iostream>
using namespace std;

void plus_one_in_arr(int *arr, const int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] += 1; // 每个元素加1
    }
}

int main ()
{
    int arr[] = {1, 2, 3, 4, 5}; // 定义一个数组
    const int len = size(arr); // 计算数组大小
    cout << "原数组内容: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    plus_one_in_arr(arr, len); // 调用函数对数组元素加1
    cout << "修改后的数组内容: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}