// 编写程序,计算1~20000之间的质数,输出时要求每行10个数

#include <iostream>
#include <vector>

using namespace std;

// 判断质数的函数
bool isPrime(int num)
{
    if (num <= 1)
        return false; // 1 不是质数
    for (int i = 2; i * i <= num; i++)
    { // 只检查到 sqrt(num)
        if (num % i == 0)
            return false; // 如果能整除，则不是质数
    }
    return true;
}

int main()
{
    const int MAX = 20000;
    int count = 0; // 用于统计输出了多少个质数

    // 遍历 1 到 20000 之间的所有整数
    for (int i = 1; i <= MAX; i++)
    {
        if (isPrime(i))
        {                      // 如果是质数
            cout << i << "\t"; // 输出质数，"\t" 代表制表符，隔开
            count++;
            // 每输出 10 个质数换行
            if (count % 10 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}
