#include <iostream>
using namespace std;

void fun(int i, int j, int *a)
{
    *a = j - i;
}
int main()
{
    int a, b, c;
    fun(20, 9, &a);
    fun(9, a, &b);
    fun(a, b, &c);
    cout << a << "," << b << "," << c << endl;
    return 0;
}