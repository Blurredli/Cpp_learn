//
// Created by 16659 on 25-8-14.
//

#include <iostream>
using namespace std;

int main ()
{
    struct Student {
        string name;           // 学生姓名
        int age = 11;               // 学生年龄
        string gender = "男";         // 学生性别
    };

    struct Student Arr1[3] = {
        {"周杰伦"},
        {"林俊杰"},
        {"王力宏",123, "male"}}; //定义一个学生结构体数组，存储3个学生的信息
    struct Student *p1 = Arr1;

    cout << "学生姓名\t年龄\t性别" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << p1[i].name << "\t" << p1[i].age << "\t" << p1[i].gender << endl;
    }

    // 通过new,自行申请结构体数组的空间 (可以通过delete回收)
    struct Student *p2 = new Student[3] {
        {"周杰伦"},
        {"林俊杰"},
        {"王力宏",123, "male"}}; // 动态分配一个结构体数组

    cout << "学生姓名\t年龄\t性别" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << p2[i].name << "\t" << p2[i].age << "\t" << p2[i].gender << endl;
    }

    delete[] p2; // 释放动态分配的结构体数组内存 特别注意[]

    return 0;
}