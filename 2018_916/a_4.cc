#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base constructor" << endl; }
    /*virtual*/ ~Base() { cout << "Base destructor" << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Derived constructor" << endl; }
    ~Derived() { cout << "Derived destructor" << endl; }
};

int main()
{
    cout << "--- Creating Derived object d ---" << endl;
    Derived d;

    cout << "--- Creating pointer p to Base, but new Derived ---" << endl;
    Base *p = new Derived;

    cout << "--- Deleting p ---" << endl;
    delete p;

    return 0;
}