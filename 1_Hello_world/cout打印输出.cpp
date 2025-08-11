#include <iostream> // 引入标准输入输出流库
using namespace std; // 使用标准命名空间，简化代码书写

/**
 * 主函数，程序的入口点
 * 功能：演示使用 `cout` 输出不同类型的数据
 * 返回值：返回 0 表示程序正常结束
 */
int main()
{
    // 输出字符串 "I love C++!" 并换行
    cout << "I love C++!" << endl;

    // 输出整数 10 并换行
    cout << 10 << endl;

    // 输出两个字符串，使用 `<<` 连接，最后换行
    cout << "I am 10 " << "years old" << endl;

    // 返回 0 表示程序正常结束
    return 0;
}