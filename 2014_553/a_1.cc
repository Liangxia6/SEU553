#include <iostream>
using namespace std;
void f(int *p)
{
    if (p)
    {
        *p *= 100;
        cout << *p << endl;
    }
}
int main()
{
    int p = 10;
    int *ptr = &p; // 这⾥里里改成 int * ptr = &p;
    cout << p;
    f(ptr);
    cout << p;
}