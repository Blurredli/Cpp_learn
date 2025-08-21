//
// Created by 16659 on 25-8-19.
//
#include <iostream>
using namespace std;

#define  PI 3.14

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名
class Circle
{
public:
    //成员函数
    //求圆的周长
    int m_r;        // 圆的半径
    double calculateZC() const
    {
        return 2 * PI * m_r;
    }
};
int main ()
{
    Circle circle01; // 创建一个圆对象
    circle01.m_r = 10; // 设置圆的半径
    cout << "circle01的周长为：" << circle01.calculateZC() << endl;

    return 0;
}