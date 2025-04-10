#include <iostream>
using namespace std;

class base
{
public:
    int a = 0;
    base()
    {
        cout << "base()" << endl;
    }
    virtual ~base()
    {
        cout << "~base()" << endl;
    }
    virtual void ppp() { cout << "base" << endl; }
};

class derived : public base
{
public:
    int c = 2;
    derived()
    {
        cout << "derived()" << endl;
    }
    ~derived()
    {
        cout
            << "~derived()" << endl;
    }
    void ppp() { cout << "Der" << endl; }
};

int main()
{
    base *b = new derived();
    b->ppp();
    delete b;
    return 0;
}