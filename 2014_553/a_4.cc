#include <iostream>
using namespace std;
class A
{
public:
    virtual void print()
    {
        cout << "A::print" << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "B::print" << endl;
    }
};
class C : public B
{
public:
    void print()
    {
        cout << "C::print" << endl;
    }
};
int main()
{
    B b;
    C c;
    A *a;
    a = &c;
    a->print();
    a = &b;
    a->print();
    return 0;
}