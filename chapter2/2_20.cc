// 打印 ASCII 码为 32~127 的字符。

#include <iostream>
using namespace std;
int main()
{
    for (int i = 32; i < 128; i++)
        cout << (char)i;
    return 0;
}