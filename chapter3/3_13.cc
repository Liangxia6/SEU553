// 编写递归函数GetPower(int x， int y)计算 x 的y 次幂， 在主程序中实现输入输出

#include <iostream>
using namespace std;

int fun(int x, int y)
{
    if (y == 1)
        return x;
    return (x * fun(x, y - 1));
}

int main()
{
    int x = 4, y = 5;
    cout << fun(x, y);
    return 0;
}