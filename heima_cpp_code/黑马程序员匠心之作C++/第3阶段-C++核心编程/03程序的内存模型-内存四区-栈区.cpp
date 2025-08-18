//
// Created by 16659 on 25-8-18.
//
#include <iostream>
using namespace std;

int * func()
{
    int a = 10;
    return &a;
}

int main() {

    int *p = func();

    cout << *p << endl;

    return 0;
}