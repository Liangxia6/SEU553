#include <iostream>
using namespace std;

class A
{
public:
    A() { cout << "A() constructor" << endl; }
    ~A() { cout << "~A() destructor" << endl; }

    inline void show() { cout << "This is an inline member function\n "; }
};

void testScope()
{
    static A sa;
    A a;
    cout << "Inside testScope" << endl;
}

int main()
{
    {
        A temp;
        temp.show();
        cout << "Block scope end\n";
    }
    cout << "Now calling testScope()\n";
    testScope();
    cout << "End of main\n";
    return 0;
}