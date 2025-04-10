#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base constructor" << endl; }
    virtual ~Base() { cout << "Base destructor" << endl; }
    virtual void show() { cout << "Base::show()" << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Derived constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
    void show() override { cout << "Derived::show()" << endl; }
};

int main()
{
    Base *ptr = new Derived();
    ptr->show();
    delete ptr;
    return 0;
}