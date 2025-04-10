// 整数分解质因数
// 最终输出15=3*5

#include <iostream>
using namespace std;

void fun(int a, bool isFirst)
{
    if (a == 1)
    {
        return;
    }
    int factor = 2;
    while (a % factor != 0)
    {
        factor++;
    }
    if (isFirst)
    {
        cout << a << "=" << factor;
    }
    else
    {
        cout << "*" << factor;
    }
    return fun(a / factor, false);
}

int main()
{
    fun(500, true);
    return 0;
}