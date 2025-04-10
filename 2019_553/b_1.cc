// 实现求出由0-9这些数字组成的三位数有多少种（要求三位数的每一位均不同）
// ps:总共5个空，坑 在第一个空三位数的第一位不能是0

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, num = 0;        // 第一个空 num初始化为0
    for (i = 1; i <= 9; ++i)     // 第二个空  i!=0
        for (j = 0; j <= 9; ++j) // 第三个空 j <= 9
            if (i != j)          // 第四个空 i != j
            {
                for (k = 0; k <= 9; ++k)
                {
                    if (k != i && k != j) // 第五个空
                    {
                        num++; // 第六个空
                    }
                }
            }
    cout << "num=" << num << endl;
}