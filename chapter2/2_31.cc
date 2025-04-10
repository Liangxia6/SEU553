// 求质数

#include <iostream>
using namespace std;

bool isPrimer(int a)
{
    if (a <= 1)
        return false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrimer(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}