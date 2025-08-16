//
// Created by 16659 on 25-8-14.
//
#include <iostream>
using namespace std;


/*需要实现：主菜单函数、查询函数、存款函数、取款函数，共4个函数
*1.启动要求输入用户姓名
*2．启动后显示主菜单，要求用户输入选择
*3，基于用户选择，提供相应功能
*4，每一个功能内都能显示余额和用户姓名
*5，每一个功能结束后，都会返回主菜单，当用户输入退出或输入错误程序才退出
*/

void query_money(const string * const name, int * const money)
{
    cout <<"--------------查询余额-------------" << endl;
    cout << "用户姓名: " << *name << "您的余额为: " << *money << "元" << endl;
}

void save_money(const string * const name, int * const money)
{
    cout <<"--------------存款-------------" << endl;
    cout << "用户姓名: " << *name << "您的余额为: " << *money << "元" << endl;
    cout << "请输入存款金额: " << endl;
    int save;
    cin >> save;
    if (save > 0)
    {
        *money += save;
        cout << "存款金额: " << save << "元" << endl;
        cout << "存款成功！当前余额为: " << *money << "元" << endl;
    }
    else
    {
        cout << "存款金额必须大于0!" << endl;
    }
}

void get_money(const string * const name, int * const money)
{
    cout <<"--------------取款-------------" << endl;
    cout << "用户姓名: " << *name << "您的余额为: " << *money << "元" << endl;
    cout << "请输入取款金额: " << endl;
    int get;
    cin >> get;
    if (get > 0)
    {
        *money -= get;
        cout << "取款金额: " << get << "元" << endl;
        cout << "取款成功！当前余额为: " << *money << "元" << endl;
    }
    else
    {
        cout << "取款金额必须大于0!" << endl;
    }
}

/**
 * 显示主菜单并获取用户选择
 * @param name 用户姓名指针
 * @return 用户选择的菜单项（1-4），输入无效时返回0
 */
int menu (const string * const name)
{
    cout << *name << "，欢迎来到银行系统，请选择操作：" << endl;
    cout << "1. \t查询余额" << endl;
    cout << "2. \t存款" << endl;
    cout << "3. \t取款" << endl;
    cout << "4. \t退出" << endl;
    cout << "请输入您的选择: ";

    int choice;
    while (true)
    {
        cin >> choice;
        // 检查输入是否为整数且在有效范围内
        if (cin.fail() || choice < 1 || choice > 4)
        {
            cin.clear(); // 清除错误标志
            cin.ignore(1024, '\n'); // 丢弃错误输入
            cout << "输入无效，请输入1-4之间的数字: ";
        }
        else
        {
            break;
        }
    }
    return choice;
}

int main ()
{
    string name;
    cout << "请输入您的姓名: ";
    cin >> name;

    int * const money = new int(50000); // 动态分配初始余额为50000元
    cout << "您的初始余额为: " << *money << "元" << endl;

    bool is_run = true; // 控制循环的变量
    while (is_run)
    {
        int choice = menu(&name); // 显示菜单并获取用户选择

        switch (choice)
        {
            case 1:
                query_money(&name, money);
                break;
            case 2:
                save_money(&name, money);
                break;
            case 3:
                get_money(&name, money);
                break;
            case 4:
                cout << "感谢使用银行系统，再见！" << endl;
                is_run = false; // 设置循环变量为false，退出循环
                break;
            default:
                cout << "无效的选择，请重新输入。" << endl;
                break;
        }
    }

    delete money;

    return 0;
}