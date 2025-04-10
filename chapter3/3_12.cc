// 在主程序中提示输入整数n，编写函数用递归的方法求1 + 2 + … + n的值

#include <iostream>
using namespace std;

int fun(int a)
{
    if (a == 1)
        return 0;
    return a + fun(a);
}

int main()
{
    int num = 100;
    cout << fun(100);
    return 0;
}