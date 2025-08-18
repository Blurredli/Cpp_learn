//
// Created by 16659 on 25-8-17.
//

#include <iostream>
using namespace std;

class Wukong
{
public:
    int id;          // ID
    string name;     // 游戏名字

    // 添加构造函数
    Wukong(int id, const string &name) : id(id), name(name){}

    void say_hi() const // 自我介绍方法
    {
        cout << "ID: " << id << ", 游戏名字: " << name << ", 游戏币数量: " << money << endl;
    }

    void fight()
    {
        cout << "打小怪, 获得1000游戏币!" << endl;
        add_money();         // 调用添加游戏币的方法
    }

    void action()
    {
        cout << "参加活动, 获得2000游戏币!" << endl;
        money += 2000;
    }

    void my_money() const
    {
        cout << "当前游戏币数量: " << money << endl;
    }

private:
    int money = 10000;       // 游戏币数量

    void add_money()
    {
        money += 1000;
    }
};

int main ()
{
    class Wukong wk{1, "周杰伦"};        // 创建Wukong类的对象
    wk.say_hi();

    wk.action();
    wk.fight();
    wk.my_money();

    return 0;
}