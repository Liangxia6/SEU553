// 编写函数求两个整数的最大公约数和最小公倍数。

#include <iostream>
using namespace std;

int fun1(int a, int b); // 最大公约数
int fun2(int a, int b); // 最小公倍数

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << fun1(a, b) << endl;
    cout << fun2(a, b) << endl;
}

int fun1(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int fun2(int a, int b)
{
    return (a * b) / fun1( a, b);
}
