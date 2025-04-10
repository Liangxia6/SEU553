// 给出一个函数，函数体实现字符串转换为整数

#include <iostream>
#include <string.h>
using namespace std;

int func(char *str)
{
    int d, num, len;
    while (*str != '\0')
    {
        d = *str - '0';
        len = strlen(str);
        for (int i = 0; i < len - 1; i++)
        {
            d = d * 10;
        }
        num += d;
        len--;
        str++;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    cout << func("31424");
    return 0;
}
