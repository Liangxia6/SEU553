// 读题

#include <iostream>
using namespace std;

class A
{
private:
    int n;

public:
    A()
    {
        n = 1;
        cout << "A Constructor " << n << endl;
    }
    A(int a = 0)
    {
        n = a;
        cout << "A Constructor " << n << endl;
    }
    A(const A &a)
    {
        n = a.n;
        cout << "A copy constructor " << n << endl;
    }
    virtual void print()
    {
        cout << "A n = " << n << endl;
    }
};

class B : public A
{
private:
    A a;
    int m;

public:
    B(int x = 0) : a(x)
    {
        m = x;
        cout << "B Constructor " << m << endl;
    }
    void print()
    {
        A::print();
        cout << "B m = " << m << endl;
    }
};

int main()
{
    A a(5);  // A构造5
    A a1(a); // A拷贝构造5
    B b(6);  // B(int x = 0) : A(x), a(x)       A(x):调用基类AA构造6, a(x):A构造6, B构造6
    A *p = &a;
    p->print();
    p = &a1;
    p->print();
    p = &b;
    p->print();
    return 0;
}