#include <iostream>
using namespace std;

class MyClass
{
public:
    int *p;
    MyClass(int val)
    {
        p = new int(val);
        cout << "Constructor called. p=" << p << ", *p=" << *p << endl;
    }
    MyClass(const MyClass &other)
    {
        p = new int(*(other.p));
        cout << "Copy constructor called. p=" << p << ", *p=" << *p << endl;
    }
    MyClass &operator=(const MyClass &other)
    {
        if (this != &other)
        {
            delete p;
            p = new int(*(other.p));
        }
        cout << "operator= called. p=" << p << ", *p=" << *p << endl;
        return *this;
    }
    ~MyClass()
    {
        cout << "Destructor called. p=" << p << endl;
        delete p;
    }
};

int main()
{
    MyClass a(10);
    MyClass b = a;
    MyClass c(20);
    c = a;
    return 0;
}