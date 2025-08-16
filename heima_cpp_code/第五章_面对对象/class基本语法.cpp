//
// Created by 16659 on 25-8-16.
//
#include <iostream>
using namespace std;

/*
*设计一个类，可以封装学生实体的属性和行为
*属性（类的成员变量》：学号、姓名、年龄、地址
*行为（类的成员方法（函数））：自我介绍（说出自己的属性）
*/

class Student;          // 前向声明类Student

class Student
{
public:
    int id;            // 学号
    string name;      // 姓名
    int age;          // 年龄
    string address;   // 地址

    void say_hi()   // 自我介绍方法
    {
        cout << "学号: " << id << ", 姓名: " << name << ", 年龄: " << age << ", 地址: " << address << endl;
    }


};


int main ()
{
    // 创建Student类的对象
    class Student stu;
    stu.id = 1;                    // 设置学号
    stu.name = "张三";              // 设置姓名
    stu.age = 20;                 // 设置年龄
    stu.address = "北京市";        // 设置地址

    cout << "我是 " << stu.name << endl;

    stu.say_hi();                // 调用自我介绍方法

    class Student stu2 = {2, "李四", 22, "上海市"}; // 使用初始化列表创建对象
    cout << "我是 " << stu2.name << endl;
    stu2.say_hi();               // 调用自我介绍方法

    return 0;
}