#include <iostream>
using namespace std;

int getValue1()
{
    static int x = 0;
    x++;
    return x * x;
}

static int x2 = 0;
int getValue2()
{
    x2++;
    return x2 * x2;
}

int main()
{
    cout << getValue1() << " " << getValue1() << endl;
    cout << getValue2() << " " << getValue2() << endl;
    return 0;
}