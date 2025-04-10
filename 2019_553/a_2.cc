#include <iostream>
using namespace std;

void funcc(int a)
{
    cout << a << endl;
}

int main()
{
    int i = 0, k = 2;
    for (int i = 1; i <= 3; i++)
    {
        funcc(i * k);
    }
    cout << i << " " << k << endl;
    return 0;
}