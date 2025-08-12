#include <iostream>
using namespace std;

int main()
{
    //定义一个变量记录年龄
    int age;
    cout << "欢迎来到游乐场,儿童免费,成人收费!"<< endl;
    cout << "请输入你的年龄："<< endl;

    cin >> age;

    //通过if语句判断年龄,如果age<18,则输出"免费"
    if (age < 18)
    {
        cout << "免费" << endl;
    }
    //如果age>=18,则输出"收费"
    else
    {
        cout << "收费" << endl;
    }
}