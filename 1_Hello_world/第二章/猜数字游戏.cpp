// 猜一猜心里数字
// 1.定义一个变量，数字类型，内容随意（1~10范围）。
// 2.基于cin语句输入猜想的数字，判断输入的数字是猜对或猜大、猜小了。
// 3.需要一直能猜测,直到猜出才停止

#include <iostream>
using namespace std;

int main()
{
    // 定义一个变量记录心里数字
    int number = 7;
    int guess;
    cout << "欢迎来到猜数字游戏,请输入你猜的数字(1~10):"<< endl;

    // 一直猜，直到猜对为止
    do
    {
        cin >> guess; // 读取用户输入
        if (guess < number)
        {
            cout << "猜小了，请再试一次:" << endl; // 提示猜小了
        }
        else if (guess > number)
        {
            cout << "猜大了，请再试一次:" << endl; // 提示猜大了
        }
        else
        {
            cout << "恭喜你，猜对了!" << endl; // 猜对了，游戏结束
        }
    } while (guess != number); // 判断是否猜对，未猜对则继续循环
}
