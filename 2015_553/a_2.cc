/*使用随机数函数srand()和time()生成随机数，来模拟掷骰子。
（1）分别投掷两次，将两次所得的值，求出其和值，
并写入二维数组A，数组的行存放第一次投掷的结果，
数组的列存放第二次投掷的结果。
（2）如果投掷1000次，将其和值出现的次数写入二维数组B。
编写函数完成以上功能。*/

#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a1[3][2] = {0};
    for (int i = 0; i < 2; i++)
    {
        a1[0][i] = rand() % 6 + 1;
        a1[1][i] = rand() % 6 + 1;
        a1[2][i] = a1[0][i] + a1[1][i];
    }

    int a2[3][100] = {0};
    for (int i = 0; i < 100; i++)
    {
        a1[0][i] = rand() % 6 + 1;
        a1[1][i] = rand() % 6 + 1;
        a1[2][i] = a1[0][i] + a1[1][i];
    }
    for (int i = 0; i < 104; i++)
        cout << a2[0][i] << "  ";
    cout << endl;
    return 0;
}
a