#include <iostream>
#include <fstream>
using namespace std;
class A
{
public:
    int n;
    A(int n = 0)
    {
        this->n = n;
        cout << "A constructor" << n << endl;
    }
    A(const A &a)
    {
        n = a.n;
        cout << "A copy constructor" << n << endl;
    }
    ~A()
    {
        cout << "A destructor" << n << endl;
    }
    virtual void print()
    {
        cout << "n=" << n << endl;
    }
};
class B : public A
{
public:
    A a;
    int m;
    B(int m) : a(3)
    {
        this->m = m;
        cout << "B constructor" << m << endl;
    }
    B(const B &b)
    {
        m = b.m;
        cout << "B copy constructor" << m << endl;
    }
    ~B()
    {
        cout << "B destructor" << m << endl;
    }
    void print()
    {
        cout << "n=" << n << endl; // 这里访问的是继承的基类A 的n
        cout << "m=" << m << endl;
    }
};
B b(6);
int main()
{
    A a(3);
    static B t(5);
    a.print();
    t.A::print();
    cout << "t=";
    t.print();
    return 0;
}