#include <iostream>
using namespace std;

class A
{
public:
    ~A() { std::cout << "A's destructor\n"; }
};

class B
{
    A a; // B 类中有一个 A 类型的成员
public:
    ~B() { std::cout << "B's destructor\n"; }
};

int main()
{
    B b;
}

