#include <iostream>
using namespace std;

void func(int *p, int *q)
{
    int *c;   
    c = p;
    p = q;
    q = c;
}
int main()
{
    int a = 7, b = 19;
    int *pa = &a, *pb = &b;
    cout << *pa << " " << *pb << endl;
    func(pa, pb);
    cout << *pa << " " << *pb << endl;
    return 0;
}