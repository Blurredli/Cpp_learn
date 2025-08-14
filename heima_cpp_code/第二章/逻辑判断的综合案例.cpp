/*
*案例需求（猜扑克牌）：
* 随机产出3份信息：
*第一份信息：1~10的数字，代表扑克牌1~10
*第二份信息：字符串，红色或黑色，代表扑克牌的花色
*第三份信息：字符串，如果是红色产出红桃或方块，如果是黑色产出黑桃或梅花
* 案例要求:
*通过嵌套判断，并结合判断语句猜测上述信息，如
*先猜数字，成功后猜颜色，再成功猜测具体的花型
*/
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

int main ()
{
    // 第一份信息：1~10的数字，代表扑克牌1~10
    int num = get_random_num(1, 10);
    // 第二份信息：字符串，红色0或黑色1，代表扑克牌的花色
    string color = get_random_num(0, 1) ? "红色" : "黑色";
    // 第三份信息：字符串，如果是红色产出红桃或方块，如果是黑色产出黑桃或梅花
    string suit;
    if (color == "红色")
    {
        suit = get_random_num(0, 1) ? "红桃" : "方块";
    }
    else
    {
        suit = get_random_num(0, 1) ? "黑桃" : "梅花";
    }

    cout << "猜测扑克牌信息：" << endl;
    cout << num << ";" << color << ";" << suit << endl;

    // 通过嵌套判断，并结合判断语句猜测上述信息，如
    // 先猜数字，成功后猜颜色，再成功猜测具体的花型
    int guess_num;
    cout << "请猜测扑克牌的数字（1-10）: " << endl;
    cin >> guess_num;

    if (guess_num == num)
    {
        cout << "猜测数字正确！" << endl;

        int guess_color;
        cout << "请猜测扑克牌的颜色（红色1/黑色0）: " << endl;
        cin >> guess_color;

        if ((guess_color ? "红色" : "黑色") == color)
        {
            cout << "猜测颜色正确！" << endl;

            int guess_suit;
            if (color == "红色")
            {
                cout << "请猜测扑克牌的花型（红桃1/方块0）: " << endl;
                cin >> guess_suit;

                if ((guess_suit ? "红桃" : "方块") == suit)
                {
                    cout << "恭喜你，猜测扑克牌信息全部正确！" << endl;
                }
                else
                {
                    cout << "猜测花型错误，正确的花型是：" << suit << endl;
                }
            }
            else
            {
                cout << "请猜测扑克牌的花型（黑桃1/梅花0）: " << endl;
                cin >> guess_suit;

                if ((guess_suit ? "黑桃" : "梅花") == suit)
                {
                    cout << "恭喜你，猜测扑克牌信息全部正确！" << endl;
                } else
                {
                    cout << "猜测花型错误，正确的花型是：" << suit << endl;
                }
            }
        }
        else
        {
            cout << "猜测颜色错误，正确的颜色是：" << color << endl;
        }

    }
    else
    {
        cout << "猜测数字错误，正确的数字是：" << num << endl;
    }
    return 0;
}
