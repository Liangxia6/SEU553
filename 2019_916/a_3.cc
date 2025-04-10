#include <iostream>
using namespace std;

int func(int a, int b)
{
    int c = 0;
    static int d = 3;

    if (a > b)
        c = 1;
    if (a < b)
        c = -1;
    return ++d + c;
}

int main()
{
    int x = 2, y = 3;
    for (int i = 1; i <= 2; i++)
    {
        cout << x << "," << y << "," << func(x++, y) << endl;
        x = y + 1;
    }
}