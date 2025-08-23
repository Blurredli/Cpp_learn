//
// Created by 16659 on 25-8-23.
//
#include <iostream>
using namespace std;

class Person
{
public:
    // 无参构造函数
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
    // 有参构造函数
    Person(int age, int height)
    {
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
        m_Height = new int (height);
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        // 深拷贝
        m_Height = new int (*p.m_Height);

    }
    // 析构函数
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
    }

    public:
    int m_Age;
    int *m_Height;
};

void test01()
{
    Person p1(18, 180);

    Person p2(p1);

    cout << "p1的年龄： " << p1.m_Age << " 身高： " << *p1.m_Height << endl;

    cout << "p2的年龄： " << p2.m_Age << " 身高： " << *p2.m_Height << endl;
}

int main ()
{
    test01();

    return 0;
}