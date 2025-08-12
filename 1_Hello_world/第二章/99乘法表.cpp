//写一个99乘法表的代码
#include <iostream>
using namespace std;
int main() {
    // 输出99乘法表
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " * " << i << " = " << i * j << "\t"; // 使用制表符\t对齐输出
        }
        cout << endl; // 每行结束后换行
    }
    return 0;
}