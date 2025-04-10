#include <iostream>
using namespace std;

class A0
{
public:
    virtual void print() = 0;
};
class B : public A0
{
public:
    void print() { cout << "B::print" << endl; }
};
class D : public B
{
public:
    void print() { cout << "D::print" << endl; }
};

int main()
{
    A0 *p;
    B b;
    D d;
    p = &d;
    p->print();
    p = &b;
    p->print();
}