//_goto语句

#include <iostream>
using namespace std;

int main ()
{
    a:
    cout << "这是标签a处的代码" << endl;
    goto b; // 跳转到标签b
    b:
    cout << "这是标签b处的代码" << endl;

    int i = 1;
    loop:
    cout << i << endl;
    i++; // i自增1
    if (i <=10) {
        goto loop;
    }

}
