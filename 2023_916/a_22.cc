#include <iostream>
using namespace std;

class A
{
private:
    int n;

public:
    A(int nn = 0) : n(nn)
    {
        cout << "a con" << endl;
    }
};

class B : public A
{
private:
    int m;

public:
    B(int mm) : m(mm)
    {
        cout << "b con" << endl;
    }
};

int main(int argc, char const *argv[])
{
    B *b;
    return 0;
}
