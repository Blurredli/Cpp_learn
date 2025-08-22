//
// Created by 16659 on 25-8-22.
//
#include <iostream>
using namespace std;
// 点和圆关系案例
class Point
{
public:
    // 设置点的坐标
    void setXY(int x, int y)
    {
        m_X = x;
        m_Y = y;
    }
    // 获取点的坐标
    void getXY(int &x, int &y) const
    {
        x = m_X;
        y = m_Y;
    }

private:
    int m_X; // x坐标
    int m_Y; // y坐标
};

// 圆类
class Circle
{
public:
    void setR(int r)
    {
        m_R = r;
    }
    int getR() const
    {
        return m_R;
    }
    void setCenter(Point center)
    {
        m_Center = center;
    }
    Point getCenter() const
    {
        return m_Center;
    }
    // 判断点和圆的关系
    void IsInCircle(Circle &c, Point &p)
    {
        int x, y;
        p.getXY(x, y); // 获取点的坐标
        int centerX, centerY;
        c.getCenter().getXY(centerX, centerY); // 获取圆心坐标
        int radius = c.getR(); // 获取圆的半径

        // 计算点到圆心的距离
        int distanceSquared = (x - centerX) * (x - centerX) + (y - centerY) * (y - centerY);
        if (distanceSquared < radius * radius)
        {
            cout << "点在圆内" << endl;
        }
        else if (distanceSquared == radius * radius)
        {
            cout << "点在圆上" << endl;
        }
        else
        {
            cout << "点在圆外" << endl;
        }
    }
private:
    int m_R;        // 半径
    Point m_Center; // 圆心
};


int main ()
{
    // 创建圆对象
    Circle c;
    c.setR(10); // 设置半径为10
    // 创建圆心点对象
    Point center;
    center.setXY(10, 0); // 设置圆心坐标为(10,0)
    c.setCenter(center); // 设置圆心

    // 创建点对象
    Point p;
    p.setXY(10, 10); // 设置点坐标为(10,10)

    // 判断点和圆的关系
    c.IsInCircle(c, p);

    return 0;
}