// 猜一猜心里数字
// 1.���义一个变量，数字类型，内容随意（1~10范围）。
// 2.基于cin语句输入猜想的数字，判断输入的数字是猜对或猜大、猜小了。
// 3.需要一直能猜测,直到猜出才停止

#include <iostream>
#include <random>
using namespace std;

// 生成[min, max]范围内的随机整数
int get_random_num(int min, int max)
{
    // 创建随机数生成器
    random_device rd;
    mt19937 gen(rd());
    // 定义均匀分布
    uniform_int_distribution<> dis(min, max);
    // 生成随机数
    int random_number = dis(gen);
    return random_number;
}

int main()
{
    // 用随机函数生成心里数字
    int number = get_random_num(1, 100);
    int guess;
    int count = 0; // 记录猜测次数
    cout << "欢迎来到猜数字游戏,请输入你猜的数字(1~100):"<< endl;

    // 一直猜，直到猜对为止
    do
    {
        cin >> guess; // 读取用户输入
        count++; // 每猜一次计数加一
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
            cout << "你总共猜了 " << count << " 次。" << endl; // 输出猜测次数
        }
    } while (guess != number); // 判断是否猜对，未猜对则继续循环
}
