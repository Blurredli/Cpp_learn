#include <iostream>

using namespace std;

/**
 * 主函数
 * 功能：提示用户输入字符串，读取输入并显示出来
 * 参数：无
 * 返回值：int类型，程序执行状态
 */
int main() {
    // 提示用户输入字符串
    cout <<"你好, 请输入字符串:" << endl;
    // 声明字符串变量用于存储用户输入
    string str;
    // 从标准输入读取用户输入的字符串
    cin >> str;
    // 显示用户输入的字符串
    cout << "你输入的字符串是: " << str << endl;
}
