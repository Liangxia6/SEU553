#include <iostream>
#include <fstream>
using namespace std;
// class A
// {
// public:
//     int n;
//     A(int n = 0)
//     {
//         this->n = n;
//         cout << "A constructor" << endl;
//     }
//     A(const A &a)
//     {
//         n = a.n;
//         cout << "A copy constructor" << endl;
//     }
//     ~A()
//     {
//         cout << "A destructor" << endl;
//     }
//     virtual void print()
//     {
//         cout << "n=" << n << endl;
//     }
// };
// class C
// {
// public:
//     C(int x = 0)
//     {
//         cout << "C cons" << endl;
//     }
//     C(C &c)
//     {
//         cout << "C copy" << endl;
//     }
//     C(C &&c)
//     {
//         cout << "C refence" << endl;
//     }
//     ~C()
//     {
//         cout << "C des" << endl;
//     }
// };

// class B : public A
// {
// public:
//     C a;
//     int m;
//     B(int m) : a(m)
//     {
//         this->m = m;

//         cout << "B constructor" << endl;
//     }
//     B(const B &b)
//     {
//         m = b.m;
//         cout << "B copy constructor" << endl;
//     }

//     ~B()
//     {
//         cout << "B destructor" << endl;
//     }
//     void print()
//     {
//         cout << "n=" << n << endl; // 这里访问的是继承的基类A 的n
//         cout << "m=" << m << endl;
//     }
// };

// C retc()
// {
//     C c;
//     return c;
// }

// int main()
// {
//     // A a(3);
//     // B t(5);
//     // a.print();
//     // t.A::print();
//     // cout << "t=";
//     // t.print();
//     C c = retc();
//     cout << "===" << endl;
//     return 0;
// }

class MyClass
{
private:
    int a;
    int b;

public:
    MyClass(int x, int y) : b(x), a(y)
    { // 这里的初始化顺序不影响成员初始化顺序
      // 构造函数体
    }

    void printValues()
    {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main()
{
    MyClass obj(10, 20);
    obj.printValues();
}