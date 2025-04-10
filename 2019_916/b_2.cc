// 用0-9，10个数字组成不重复的一个3位数，求所有组合的个数

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, num;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k <= 9; k++)
            {
                if (j != k && i != k)
                    num++;
            }
        }
    }
    cout << num;
}
