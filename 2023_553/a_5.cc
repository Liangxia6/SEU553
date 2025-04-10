// 读题目

#include <iostream>
using namespace std;

int fun1(int &a)
{
    return a++;
}
int fun2(int a)
{
    return ++a;
}
int fun3()
{
    static int b = 1;
    b++;
    return b;
}

int main()
{
    int a = 5;
    cout << fun1(a) << endl;
    cout << fun2(a) << endl;
    cout << fun3() << endl;
    cout << fun2(a) << endl;
    cout << fun3() << endl;
}

// 5  7  2  7  3