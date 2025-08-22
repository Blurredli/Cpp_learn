//
// Created by 16659 on 25-8-22.
//
#include <iostream>
using namespace std;

//立方体类设计
//1、创建立方体类
//2、设计属性
//3、设计行为获取立方体面积和体积
//4、分别利用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:
    // 长度
    void setL(int l)
    {
        m_L = l;
    }
    int getL() const
    {
        return m_L;
    }
    // 宽度
    void setW(int w)
    {
        m_W = w;
    }
    int getW() const
    {
        return m_W;
    }
    // 高度
    void setH(int h)
    {
        m_H = h;
    }
    int getH() const
    {
        return m_H;
    }
    // 面积
    int calculateArea() const
    {
        return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
    }
    // 体积
    int calculateVolume() const
    {
        return m_L * m_W * m_H;
    }
    // 成员函数判断两个立方体是否相等
    bool isSameByClass(Cube &c)
    {
        if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        {
            return true;
        }
        return false;
    }
private:
    int m_L; // 长度
    int m_W; // 宽度
    int m_H; // 高度
};

// 利用全局函数判断两个立方体是否相等
bool isSame(const Cube &c1, const Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}

int main ()
{
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1 的面积为:　" << c1.calculateArea() << endl;
    cout << "c1 的体积为:　" << c1.calculateVolume() << endl;


    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(110);

    cout << "全局函数判断结果: ";
    (isSame(c1, c2))? cout << "c1 和 c2 相等" << endl : cout << "c1 和 c2 不相等" << endl;
    cout << "成员方法判断结果: ";
    (c1.isSameByClass(c2))? cout << "c1 和 c2 相等" << endl : cout << "c1 和 c2 不相等" << endl;
    return 0;
}