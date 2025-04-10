// 读程序

#include <iostream>
using namespace std;

int main()
{
    int n = 13;
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0)
            continue;
        cout << i << ' ';
        if (i % 2 == 0)
            cout << endl;
        if (i % 10 == 0)
            break;
    }
}