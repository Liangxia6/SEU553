#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base::show()" << endl;
    }
    virtual ~Base()
    {
        cout << "b des" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived::show()" << endl;
    }
    ~Derived()
    {
        cout << "d des" << endl;
    }
};

int main()
{
    Base b = Derived();
    b.show();

    // Base b;
    // Derived d;
    // Base *p = &b;
    // p->show();

    //     p = &d;
    // p->show();

    return 0;
}